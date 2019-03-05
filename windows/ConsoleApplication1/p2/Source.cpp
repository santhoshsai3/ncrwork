#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<tchar.h>
int _tmain(int argc, TCHAR *argv[])
{
	LPWSTR *size;
	int no_of_args = argc;
	int i;
	size = CommandLineToArgvW(GetCommandLineW(), &no_of_args);
	if (NULL == size)
	{
		wprintf(L"no command line arguments");
		return 0;
	}
	else
	{
		for (i = 0; i < no_of_args; i++)
		{
			printf("%d : %lS \n", i, argv[i]);
			
		}
	}
	getchar();
}