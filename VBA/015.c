#include<stdio.h>
main()
{
	int no1, no2,goukei;
	printf("1つ目の整数：");
	scanf("%d", &no1);
	printf("２つ目の整数：");
	scanf("%d", &no2);
	goukei = no1 + no2;
	printf("答えは%dです\n",goukei);
}