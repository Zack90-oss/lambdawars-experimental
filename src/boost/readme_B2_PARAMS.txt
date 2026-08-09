b2 --build-dir=build ^
    toolset=msvc-14.2 ^
    address-model=32 ^
    --with-python ^
    --python-root=H:\LambdaWars_fork_experimental\src\thirdparty\python ^
    --python-version=3.10 ^
    link=static ^
    runtime-link=static ^
    -j4
	
IGNORE ME. Non-compiling push for version control
+ some changes to fmstr.h and others to make compatible with MSVC v143