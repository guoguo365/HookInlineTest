#include<Windows.h>

int main()
{
	HMODULE hModule = LoadLibraryA("HookInlineDLL.dll");
	if (hModule)
	{
		MessageBoxW(0, L"���", L"1111", MB_OK);
	}

	return 0;
}