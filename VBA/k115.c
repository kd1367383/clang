#include<stdio.h>
main()
{
	char c[40];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &c[0]);
	for (int i = 0; c[i] != '\0'; i++) {
		putchar(*c);
		putchar('\n');
	}
}