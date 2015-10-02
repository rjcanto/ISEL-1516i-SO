#include "stdio.h"
#include "windows.h"


char* str = "A String";
SYSTEM_INFO temp;


int main(int argc, char* argv[])
{
	unsigned int x ;
	
	printf("press return to start...");
	getchar();
	printf("main address = %p\n", main);
	//printf("GetSystemInfo address = %p\n", GetSystemInfo(&temp));
	//printf("a address = %p\n", &a);
	//printf("a[0]=%d\n", a[0]);
	//printf("press return to continue...");
	//getchar();
	//a[0] = 1;
	printf("String address = %p\n", &str);
	printf("Stack Address= %p\n", &x);
	//printf("a[0]=%d after set by process\n", a[0]);
	//printf("press return to end...");
	getchar();
	return 0;
}

