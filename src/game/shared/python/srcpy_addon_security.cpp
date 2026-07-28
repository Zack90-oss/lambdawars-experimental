// Used for restricting certain functions like open() and etc.

#include "cbase.h"
#include "srcpy.h"
#include <filesystem.h>
#include "icommandline.h"
#include "srcpy_usermessage.h"
#include "srcpy_gamerules.h"
#include "srcpy_entities.h"
#include "srcpy_networkvar.h"
#include "gamestringpool.h"
#include "tier1\fmtstr.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

// Shorter alias
namespace bp = boost::python;

static void FunctionRestricted()
{
	PyErr_SetString(PyExc_RuntimeError,
		"Native open() is disabled for security reasons. Use filesystem.*() instead.");
	bp::throw_error_already_set();
}

bool SrcPython_ApplyUsageRestrictions(bp::object *p_mainmodule, bp::api::object *p_mainnamespace)
{
	//bp::api::object_attribute global_namespace = p_mainmodule->attr("__dict__");
	//global_namespace["open"] = bp::make_function(FunctionRestricted);

	bp::object builtins = bp::import("builtins");
	builtins.attr("open") = bp::object();

	return true;
}