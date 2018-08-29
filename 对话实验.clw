; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=StuManagSearch
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "对话实验.h"

ClassCount=19
Class1=CMyApp
Class2=CMyDlg
Class3=CAboutDlg

ResourceCount=16
Resource1=IDD_DIALOG6
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG12
Class4=Login
Resource4=IDD_DIALOG3
Class5=LoginError
Class6=Admenu
Resource5=IDD_DIALOG4
Class7=StudentLogin
Resource6=IDD_ABOUTBOX
Class8=Stumenu
Class9=LoginStu
Resource7=IDD_DIALOG10
Class10=LoginVist
Resource8=IDD_DIALOG2
Class11=InforWrite
Resource9=IDD_MY_DIALOG
Resource10=IDD_DIALOG9
Class12=StuSearch
Class13=StuMod
Class14=Warning
Resource11=IDD_DIALOG5
Class15=ManagSearch
Resource12=IDD_DIALOG1
Class16=SearchDom
Resource13=IDD_DIALOG8
Class17=StuManagSearch
Resource14=IDD_DIALOG11
Class18=ModKey
Resource15=IDD_DIALOG13
Class19=Money
Resource16=IDD_DIALOG14

[CLS:CMyApp]
Type=0
HeaderFile=对话实验.h
ImplementationFile=对话实验.cpp
Filter=N

[CLS:CMyDlg]
Type=0
HeaderFile=对话实验Dlg.h
ImplementationFile=对话实验Dlg.cpp
Filter=D
LastObject=CMyDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=对话实验Dlg.h
ImplementationFile=对话实验Dlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MY_DIALOG]
Type=1
Class=CMyDlg
ControlCount=6
Control1=AdministratorLogin,button,1342242817
Control2=ExitSystem,button,1342242816
Control3=IDC_STATIC1,static,1342308864
Control4=StudentLogin,button,1342242816
Control5=IDC_STATIC,static,1342177294
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG1]
Type=1
Class=Login
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=UserName,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=Key,static,1342308352
Control6=IDC_EDIT2,edit,1350631552

[CLS:Login]
Type=0
HeaderFile=Login.h
ImplementationFile=Login.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[DLG:IDD_DIALOG2]
Type=1
Class=LoginStu
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_EDIT2,edit,1350631552

[CLS:LoginError]
Type=0
HeaderFile=LoginError.h
ImplementationFile=LoginError.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK

[DLG:IDD_DIALOG3]
Type=1
Class=Admenu
ControlCount=6
Control1=IDCANCEL,button,1342242816
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_BUTTON4,button,1342242816
Control5=IDC_BUTTON3,button,1342242816
Control6=IDC_BUTTON5,button,1342242816

[CLS:Admenu]
Type=0
HeaderFile=Admenu.h
ImplementationFile=Admenu.cpp
BaseClass=CDialog
Filter=D
LastObject=Admenu
VirtualFilter=dWC

[CLS:StudentLogin]
Type=0
HeaderFile=StudentLogin.h
ImplementationFile=StudentLogin.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[DLG:IDD_DIALOG4]
Type=1
Class=Stumenu
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_BUTTON3,button,1342242816
Control5=IDC_STATIC,static,1342177294

[CLS:Stumenu]
Type=0
HeaderFile=Stumenu.h
ImplementationFile=Stumenu.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[CLS:LoginStu]
Type=0
HeaderFile=LoginStu.h
ImplementationFile=LoginStu.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[CLS:LoginVist]
Type=0
HeaderFile=LoginVist.h
ImplementationFile=LoginVist.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON1

[DLG:IDD_DIALOG6]
Type=1
Class=InforWrite
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_EDIT2,edit,1350631552
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_EDIT4,edit,1350631552

[CLS:InforWrite]
Type=0
HeaderFile=InforWrite.h
ImplementationFile=InforWrite.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[DLG:IDD_DIALOG8]
Type=1
Class=StuMod
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT5,edit,1350631552
Control8=IDC_EDIT6,edit,1350631552
Control9=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG9]
Type=1
Class=StuSearch
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT2,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_EDIT5,edit,1350631552

[CLS:StuSearch]
Type=0
HeaderFile=StuSearch.h
ImplementationFile=StuSearch.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[CLS:StuMod]
Type=0
HeaderFile=StuMod.h
ImplementationFile=StuMod.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[DLG:IDD_DIALOG5]
Type=1
Class=Warning
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352

[CLS:Warning]
Type=0
HeaderFile=Warning.h
ImplementationFile=Warning.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCANCEL
VirtualFilter=dWC

[DLG:IDD_DIALOG10]
Type=1
Class=ManagSearch
ControlCount=14
Control1=IDCANCEL,button,1342242816
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT2,edit,1350631552
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_EDIT4,edit,1350631552
Control11=IDC_EDIT5,edit,1350631552
Control12=IDC_BUTTON1,button,1342242816
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT6,edit,1350631552

[CLS:ManagSearch]
Type=0
HeaderFile=ManagSearch.h
ImplementationFile=ManagSearch.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON1
VirtualFilter=dWC

[DLG:IDD_DIALOG11]
Type=1
Class=SearchDom
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[CLS:SearchDom]
Type=0
HeaderFile=SearchDom.h
ImplementationFile=SearchDom.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DIALOG12]
Type=1
Class=StuManagSearch
ControlCount=17
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT4,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT5,edit,1350631552
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT6,edit,1350631552
Control15=IDC_STATIC,static,1342177294
Control16=IDC_STATIC,static,1342308352
Control17=IDC_EDIT7,edit,1350631552

[CLS:StuManagSearch]
Type=0
HeaderFile=StuManagSearch.h
ImplementationFile=StuManagSearch.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[DLG:IDD_DIALOG13]
Type=1
Class=ModKey
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342177294

[CLS:ModKey]
Type=0
HeaderFile=ModKey.h
ImplementationFile=ModKey.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[DLG:IDD_DIALOG14]
Type=1
Class=Money
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342177294

[CLS:Money]
Type=0
HeaderFile=Money.h
ImplementationFile=Money.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCANCEL

