#include<stdio.h>
void link(char* p_a, char* p_b);
main()
{
	char a[100],b[50];
	int i;
	printf("�z��a:");
	scanf("%s", &a);
	printf("�z��b:");
	scanf("%s", &b);
	link(a,b);
	printf("�z��a:%s", a);
}
void link(char* p_a, char* p_b)
{
	int i,j;
	for (; *p_a != '\0'; p_a++);
	while(*p_b!='\0') 
	{
		*p_a = *p_b;
		p_a++;
		p_b++;
	}
	*p_a = '\0';
	return;
}