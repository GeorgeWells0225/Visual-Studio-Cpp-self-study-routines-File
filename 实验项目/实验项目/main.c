#include<Windows.h>
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup") //非system函数调用下，启动其他函数时不显示DOS窗口

void main()
{

	MessageBoxA(0,"他妹的","还可以",0);
	ShellExecuteA(0,"open","notepad.exe",0,0,1);

}