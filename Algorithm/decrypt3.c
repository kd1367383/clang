#include<stdio.h>
main()
{
	char s[21], k[21];
	int i;
	printf("sを入力");
	scanf("%s", &s[0]);
	printf("復号キーを入力");
	scanf("%s", &k[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - (k[i] - '0');
		i++;
	}
	printf("復号済文字列は、%s", s);
}