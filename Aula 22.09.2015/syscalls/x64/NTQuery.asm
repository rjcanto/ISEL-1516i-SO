

.code

NtQueryTimerResolution proc
 mov	r10, rcx
 mov	eax, 148h  ; syscall number
 syscall
 ret 
NtQueryTimerResolution endp

end