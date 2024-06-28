#include<stdio.h>
main()
{
	char d;
	printf("•¶š‚ğ“ü—ÍF");
	scanf("%c", &d);
	if ('a' <= d && 'z' >= d) {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", d-0x20);
	}
	else{
		if ('A' <= d && 'Z' >= d) {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", d+0x20);
		}
		else {
			printf("error");
		}
	}
}