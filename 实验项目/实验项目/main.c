#include<Windows.h>
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup") //��system���������£�������������ʱ����ʾDOS����

void main()
{

	MessageBoxA(0,"���õ�","������",0);
	ShellExecuteA(0,"open","notepad.exe",0,0,1);

}