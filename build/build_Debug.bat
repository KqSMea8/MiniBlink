call "%VS140COMNTOOLS%\..\..\VC\bin\amd64_x86\vcvarsamd64_x86.bat" %2
set VisualStudioVersion=14.0
devenv miniblink.sln /build "Debug|Win32" /Out ../out/Release/build.log /Project miniblink

pause
