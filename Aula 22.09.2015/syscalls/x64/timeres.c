#include <windows.h>

int main() {
	DWORD tci = GetTickCount(), tcc;
	
	while ((tcc = GetTickCount()) == tci);
	
	printf("Timer resolution=%dms\n", tcc -tci);
	return 0;
}