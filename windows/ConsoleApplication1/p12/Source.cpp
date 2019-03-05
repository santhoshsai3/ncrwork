#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<tchar.h>
DWORD WINAPI thread_func(LPVOID lparam)
{
	printf("child thread\n");

	return 0;
}
int main()
{
	DWORD thid;
	HANDLE hthread;
	hthread = CreateThread(NULL, 0, thread_func, NULL, 0, &thid);
	if ( NULL == hthread )
	{
		printf("Error: %d", GetLastError());
		getchar();
		return -1;
	}

	CloseHandle(hthread);
	getchar();
	return 0;
}