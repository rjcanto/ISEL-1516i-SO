#include <stdio.h>
#include <windows.h>

typedef void   (*NtQueryTimerResolutionPtr)(  ULONG * MinimumResolution,
								ULONG *MaximumResolution,
							    ULONG *CurrentResolution);
 

int main()
{
	ULONG MinimumResolution=0;
	ULONG MaximumResolution=0;
	ULONG CurrentResolution=0;
	NtQueryTimerResolutionPtr ptrFunc;
 
 
 FARPROC WINAPI GetProcAddress(
    _In_  HMODULE hModule,
    _In_  LPCSTR lpProcName
  );


	HMODULE ntlib = LoadLibrary("ntdll.dll");
	if (ntlib == NULL) {
		printf("can't open ntdll.dll, error %d\n", GetLastError());
		exit(1);
	}
	else {
		printf("ntdll.dll base address=%p\n", ntlib);
	}
	
	ptrFunc = (NtQueryTimerResolutionPtr) GetProcAddress(ntlib, "NtQueryTimerResolution");
	
	if (ptrFunc == NULL) {
	printf("can't find NtQueryTimerResolution, error %d\n", GetLastError());
		exit(1);
	}
	else {
			printf("NtQueryTimerResolution  address=%p\n", ptrFunc);
	}
	ptrFunc( &MinimumResolution,
							&MaximumResolution,
							&CurrentResolution);

	printf("MinimumResolution=%ld, MaximumResolution=%ld, CurrentResolution=%ld\n",
			MinimumResolution, MaximumResolution, CurrentResolution);
  
   
	return 0;
}

