#include<stdio.h>
main()
{
	char d;
	printf("��������́F");
	scanf("%c", &d);
	if ('a' <= d && 'z' >= d) {
		printf("�ϊ������%c\n", d-0x20);
	}
	else{
		if ('A' <= d && 'Z' >= d) {
			printf("�ϊ������%c\n", d+0x20);
		}
		else {
			printf("error");
		}
	}
}