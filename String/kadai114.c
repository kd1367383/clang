#include<stdio.h>
main()
{
	char c[128];
	int i;
	printf("文字列：");
	scanf("%s", &c[0]);
	for (i = 0; c[i]!='\0'; i++) {
	}
	printf("文字列：%s\t文字数＝%d",c, i);
}