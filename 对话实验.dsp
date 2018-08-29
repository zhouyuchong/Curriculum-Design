# Microsoft Developer Studio Project File - Name="对话实验" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=对话实验 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "对话实验.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "对话实验.mak" CFG="对话实验 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "对话实验 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "对话实验 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "对话实验 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "对话实验 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "对话实验 - Win32 Release"
# Name "对话实验 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Admenu.cpp
# End Source File
# Begin Source File

SOURCE=.\InforWrite.cpp
# End Source File
# Begin Source File

SOURCE=.\Login.cpp
# End Source File
# Begin Source File

SOURCE=.\LoginStu.cpp
# End Source File
# Begin Source File

SOURCE=.\ManagSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\ModKey.cpp
# End Source File
# Begin Source File

SOURCE=.\Money.cpp
# End Source File
# Begin Source File

SOURCE=.\SearchDom.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StuManagSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\Stumenu.cpp
# End Source File
# Begin Source File

SOURCE=.\StuMod.cpp
# End Source File
# Begin Source File

SOURCE=.\StuSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\Warning.cpp
# End Source File
# Begin Source File

SOURCE=".\对话实验.cpp"
# End Source File
# Begin Source File

SOURCE=".\对话实验.rc"
# End Source File
# Begin Source File

SOURCE=".\对话实验Dlg.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Admenu.h
# End Source File
# Begin Source File

SOURCE=.\hdormitory.h
# End Source File
# Begin Source File

SOURCE=.\hstudent.h
# End Source File
# Begin Source File

SOURCE=.\InforWrite.h
# End Source File
# Begin Source File

SOURCE=.\Login.h
# End Source File
# Begin Source File

SOURCE=.\LoginStu.h
# End Source File
# Begin Source File

SOURCE=.\ManagSearch.h
# End Source File
# Begin Source File

SOURCE=.\ModKey.h
# End Source File
# Begin Source File

SOURCE=.\Money.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\SearchDom.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StuManagSearch.h
# End Source File
# Begin Source File

SOURCE=.\Stumenu.h
# End Source File
# Begin Source File

SOURCE=.\StuMod.h
# End Source File
# Begin Source File

SOURCE=.\StuSearch.h
# End Source File
# Begin Source File

SOURCE=.\Warning.h
# End Source File
# Begin Source File

SOURCE=".\对话实验.h"
# End Source File
# Begin Source File

SOURCE=".\对话实验Dlg.h"
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\IDB_BITMAP1.bmp
# End Source File
# Begin Source File

SOURCE=".\res\timg (1).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\timg (2).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\TIM截图20180702144813.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\对话实验.ico"
# End Source File
# Begin Source File

SOURCE=".\res\对话实验.rc2"
# End Source File
# Begin Source File

SOURCE=".\res\交大.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\图标2.bmp"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
