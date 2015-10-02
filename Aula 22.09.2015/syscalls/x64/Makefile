all:	syscall.exe syscall2.exe

syscall.exe:   syscall.c ntquery.obj
    cl /Zi syscall.c ntquery.obj

syscall2.exe:   syscall2.c  
    cl /Zi syscall2.c   
	
ntquery.obj: ntquery.asm
    ml64 /c ntquery.asm