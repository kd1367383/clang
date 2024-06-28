#include<stdio.h>
int koukan(int *a, int *b);
main()
{
	int a = 10, b = 20;
	printf("a=%d b=%d", a, b);
	koukan(&a, &b);
	printf("\na=%d b=%d\n", a, b);
}
int koukan(int *a, int *b) {
	int *w;
	w = a;
	a = b;
	b = w;
	return(*a,*b);
}