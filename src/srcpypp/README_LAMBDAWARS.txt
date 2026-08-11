Readme by Zac90 2026/8/11
LW 1.4 FE 1

All edits done to already downloaded code is marked by comment before edits
# EDITED FROM ORIGINAL x
, where x is date of the edit

example:
# EDITED FROM ORIGINAL 2026/8/10

All additions of new files are declared in the file added with appropriate comment symbols or anything like that
example:
// ADDED NOT PRESENT IN ORIGINAL 2026/8/11

HOW TO BUILD BINDINGS:
1.
Requires python at least 3.10.0
Tested with Python 3.11.5

[Test, actually] Requires gcc 8.1.0 32bit (Download the whole MinGW)
Tested with GCC 8.1.0
CAN NOT WORK WITH NEWER VERSIONS OF GCC!!!
ADD TO PATH!!! or specify in src_module_builder.py and pygccxml.cfg

2.
Do not update any of this, this is pain
Abandon this game completely if you're reading this file

3.
If you want to update py++ or pygccxml or whatever, here are some tips for... (future!?!?)

fresh pygccxml expects you to use your local pygccxml installation (NOT IN THIS FOLDER)
so change its __init__.py

and handle __version__ yourself (hardcode it basically)
experemental version (LambdaWars 1.4 ForkExperemental 1 2026/8/9) is 3.0.2 (NOT ON GITHUB)

example on line 54 in __init__.py:
# __version__ = metadata.version("pygccxml")
__version__ = "3.0.2"

you'll figure out the rest