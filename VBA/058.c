#include<stdio.h>
main()
{
	int a[3] ,* p;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p・・・%d\n" ,* p);
	p = a;
	printf("*p+1・・・%d\n", * p+1);
	p = a;
	printf("*(p+1)・・・%d\n", *( p+1));
	p = a;
	printf("*p+=1・・・%d\n" ,* p+=1);
	p = a;
	printf("*p++・・・%d\n" ,* p++);
	p = a;
	printf("(*p)++・・・%d\n", (* p)++);
	p = a;
	printf("*++p・・・%d\n" ,* ++p);
	p = a;
	printf("++*p・・・%d\n",++ * p);
	p = a;
}