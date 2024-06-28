#include<stdio.h>
void kazoe(int a);
main()
{
	int a;
	printf("®”H");
	scanf("%d",a);
	kazoe(a);
}
void kazoe(int a) {
	for (int i = 0; a > i; i++) {
		printf("*");
	}
}