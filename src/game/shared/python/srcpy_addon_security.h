// See .cpp file for explanation

#ifndef SRCPY_ADDON_SECURITY_H
#define SRCPY_ADDON_SECURITY_H
#ifdef _WIN32
#pragma once
#endif

#include "srcpy_boostpython.h"

static void FunctionRestricted();
bool SrcPython_ApplyUsageRestrictions(boost::python::object *p_mainmodule, boost::python::api::object *p_mainnamespace);

#endif // SRCPY_ADDON_SECURITY_H