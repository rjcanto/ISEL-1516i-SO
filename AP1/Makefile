CFLAGS= /Zi /MD
# com a opção /MD usa-se ligação dinâmica com a biblioteca runtime do C
# sem a opção /MD usa-se ligação estática. Confira a diferença de dimensão do 
# executável gerado

LFLAGS= /link /DYNAMICBASE:NO
#esta opção impede a randomização de endereços efectuada no carregamento
#do programa

SpaceAddress.exe:   SpaceAddress.c  
    cl $(CFLAGS) SpaceAddress.c  $(LFLAGS)

clean:
	del *.pdb *.obj *.exe *.ilk *.sln *.suo