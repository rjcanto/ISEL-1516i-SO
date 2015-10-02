
.model flat
.code

_NtQueryTimerResolution proc
 MOV EAX, 012Dh ; requested syscall number
 LEA EDX, [ESP+4] ; EDX = params...
 INT 2Eh ; throw the execution to the KM handler
 RET ; return
_NtQueryTimerResolution endp

end