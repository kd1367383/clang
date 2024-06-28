#include<stdio.h>
int kurabe(int a, int b);
main()
{
	int a, b;
	printf("‚Q‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", kurabe(a, b));
}
int kurabe(int a, int b) {
	if (a >= b) {
		return(a);
	}
	else {
		return(b);
	}
}