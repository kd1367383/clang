#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","sinkansen" };
	for (int i = 0; i < 3; i++) {
		while (*p_ride[i]) {
			putchar(*p_ride[i]++);
			putchar('\n');
		}
		putchar('\n');
	}
}