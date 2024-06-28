#include<stdio.h>
void gyakujun(char* p1,char *p2);
main()
{
	char str1[128],str2[128];
	int mojisu;
	printf("•¶š—ñH:");
	scanf("%s", str1);
	gyakujun(str1, str2);
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
}
void gyakujun(char* p1,char *p2) {
	int i, idx;
	for (idx = 0; *(p1 + 1) != '\0'; idx++) {
		p1++;
	}
	for (i = 0; i <= idx; i++) {
		*p2 = *p1;
		p2++;
		p1--;
	}
	*p2 = '\0';
}