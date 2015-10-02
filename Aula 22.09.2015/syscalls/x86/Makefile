syscall.exe:   syscall.c ntquery.obj
    cl /Zi syscall.c ntquery.obj

ntquery.obj: ntquery.asm
    ml /c ntquery.asm

clean:
	del *.obj *.pdb *.sln *.suo *.exe *.ilk