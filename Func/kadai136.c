#include<stdio.h>
int kurabe(int a, int b);
main()
{
	int a, b;
	printf("２つの整数を入力：");
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