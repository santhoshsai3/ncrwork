#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<tchar.h>
void main()
{  
	int temp;
	CHAR ansii_Array[] = "SANTHOSH"; 
	WCHAR wide_Array[] = L"Привет";
	printf("\nansii: %s", ansii_Array);
	printf("\nwide char: %S", wide_Array);
	TCHAR tc = TEXT('р');
	printf("\nTchar : %c", tc);
	
	temp = IsTextUnicode(ansii_Array, strlen(ansii_Array), NULL);
	if (temp == 0)
	{
		printf("not unicode");
	}
	else
	{
		printf("\nansiArray is unicode");
	}
	temp = IsTextUnicode(wide_Array, wcslen(wide_Array), NULL);
	if (temp == 0)
	{
		printf("\n not unicode");
	}
	else
	{
		printf("\n unicode");
	}
	int size;
	size = MultiByteToWideChar(CP_UTF8, 0, ansii_Array, -1, NULL, 0);
	if (size == 0)
	{
		printf("\n error occured ");
	}
	else
		printf("\n size of ansiArray is %d", size);
	WCHAR *ansitowide = new WCHAR[size];
	size = MultiByteToWideChar(CP_UTF8, 0, ansii_Array, -1, ansitowide, size);
	if (size == 0)
	{
		printf("\nthe error occured ");
		return;
	}
	else
		printf("\nwidechar: %S", ansitowide);
	size = WideCharToMultiByte(CP_UTF8, 0, wide_Array, -1, NULL, 0, NULL, NULL);
	if (size == 0)
	{
		printf("\nthe error occured is");
		return;
	}
	else
		printf("\nsize of ansiArray is %d", size);

	CHAR *widetoansi = new CHAR[size];
	size = WideCharToMultiByte(CP_UTF8, 0, wide_Array, -1, widetoansi, size, NULL, NULL);
	if (size == 0)
	{
		printf("\nthe error occured " );
	}
	else
		printf("\n ansi: %s", widetoansi);
	delete(ansitowide);
	delete(widetoansi);
	getchar();

}