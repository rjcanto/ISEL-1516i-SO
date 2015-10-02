

#include <stdio.h>

typedef unsigned int ULONG, *PULONG;

void  NtQueryTimerResolution(PULONG MinimumResolution,
							PULONG MaximumResolution,
							PULONG CurrentResolution);




int main(int argc, char* argv[])
{
	ULONG MinimumResolution=0;
	ULONG MaximumResolution=0;
	ULONG CurrentResolution=0;

	
	NtQueryTimerResolution( &MinimumResolution,
							&MaximumResolution,
							&CurrentResolution);

	printf("MinimumResolution=%ld, MaximumResolution=%ld, CurrentResolution=%ld\n",
			MinimumResolution,MaximumResolution, CurrentResolution);

	return 0;
}

