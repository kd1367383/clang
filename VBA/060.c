#include<stdio.h>
main()
{
	char data[15] = "Language";
	char s,i;
	char* p_data;
	p_data = data;
	printf("data[]=%s\n",data);
	printf("\n検索文字は？");
	scanf("%c", &s);
	i = 0;
	while (*(p_data + i)) {
		if (s == *(p_data + i)) {
			printf("%d", i + 1);
		}
		i++;
	}
	printf("文字目です");
}