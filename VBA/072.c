#include<stdio.h>
void display(int a);

main()
{
	int a;
	printf("data ?:");
	scanf(" %d", &a);
	display(a);
}

void display(int a) 
{
	printf("���O�f�[�^��%d\n", a);
	return;
}