// Exerc4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include "windows.h"
#include "winnt.h"
#include <stdio.h>
#include "psapi.h"

void CheckDLLInfo(DWORD pid) {
	HANDLE hProcess ;
	LPTSTR lpProcessPath;
	MEMORY_BASIC_INFORMATION lpBuffer;

	_tprintf(_T("\nChecking info about process %ld\n",pid));
	//	HANDLE WINAPI OpenProcess(
	//  _In_ DWORD dwDesiredAccess,
	//  _In_ BOOL  bInheritHandle,
	//  _In_ DWORD dwProcessId
	//);
	hProcess = OpenProcess(	
					PROCESS_QUERY_INFORMATION | PROCESS_VM_READ,
					FALSE, 
					pid
				);
	
	if(VirtualQueryEx(hProcess,NULL, &lpBuffer, sizeof(MEMORY_BASIC_INFORMATION)) == 0) {
		printf("EXERC4 - ERROR: %ld\n",GetLastError());
		return;
	}
	else {
		_tprintf(_T("Base Address: %s\n"), lpBuffer.BaseAddress);-
		_tprintf(_T("Allocation Base: %s\n"), lpBuffer.AllocationBase);
		_tprintf(_T("Region Size: %d\n"), lpBuffer.RegionSize);
		_tprintf(_T("Type: %s\n"), lpBuffer.Type);

	}



	/*DWORD WINAPI GetModuleFileNameEx(
  _In_     HANDLE  hProcess,
  _In_opt_ HMODULE hModule,
  _Out_    LPTSTR  lpFilename,
  _In_     DWORD   nSize
);*/
	//GetModuleFileNameEx(hProcess, NULL,lpProcessPath, 256);
	//

	//VirtualQueryEx*/
}

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD dwPID; 
	if (argc != 2)
		printf("usage: exerc4 <process-ID>\n");
	else {
		dwPID = _ttoi(argv[1]);
		_tprintf(_T("Checking Process %ld"),dwPID);
		CheckDLLInfo(dwPID);
	}
	return 0;
}

