#include <iostream>
#include <Windows.h>
#include <winuser.h>
using namespace std; 
LRESULT CALLBACK messagedispatcher(int nCode,WPARAM wParam,LPARAM lParam)
	{
		if(nCode==HC_ACTION)
		{
			//������Ϣ 
			
			
			
			//�ַ�
			PostMessage(HWND_BROADCAST,WM_KEYDOWN,wParam,lParam) ;
			PostMessage(HWND_BROADCAST,WM_KEYUP,wParam,lParam) ;
			//PostMessage(HWND_BROADCAST,WH_KEYBOARD_ALL,wParam,lParam) ;
		 } 
	}
int main()
{	
	while(true)
	{
			HHOOK hhook=SetWindowsHookExA(2,messagedispatcher,NULL,0);
			Sleep(10);
			UnhookWindowsHookEx(hhook);
	}

	return 0 ;
 } 
