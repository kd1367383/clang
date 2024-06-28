#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	kazu = rand() % 100 + 1;
	if (kazu <= 31) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«\n");

	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}