#include<stdio.h>
main()
{
	char su;
	printf("‡T•¶š“ü—ÍF");
	scanf("%c", &su);
	if ('a' <= su && 'z' >= su) {
		printf(" ");
	}
	else {
		if ('A' <= su && 'Z' >= su) {
			printf(" ");
		}
		else {
			printf("ERROR");
		}
	}
}