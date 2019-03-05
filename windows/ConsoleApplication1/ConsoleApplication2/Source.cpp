#include<stdio.h>
#include<stdlib.h>
#include<tchar.h>
#include<windows.h>
int _tmain(int argc, LPTSTR argv[])
{

	if (argc != 2)
	{
		printf("Usage fileopenread");
		getchar();
		return 0;
	}
	HANDLE handlerFile;
	TCHAR buffer[] = TEXT("SANTHOSH");
	handlerFile = CreateFile(argv[1], GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (handlerFile == INVALID_HANDLE_VALUE)
	{
		printf("Error\n");
		getchar();
		return FALSE;
	}
	//_tprintf(_T("File (%s)opened successfully\n"), argv[1]);
	DWORD nbw;
	BOOL ret = WriteFile(handlerFile, buffer, sizeof(buffer), &nbw, NULL);
	if (ret == 0)
	{
		printf("cannot open file");
	}
	CloseHandle(handlerFile);
	getchar();




}