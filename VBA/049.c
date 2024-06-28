#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;//変数の宣言
	p_a = &a;//ポインタの宣言
	b = *p_a;//アドレスのセット
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}