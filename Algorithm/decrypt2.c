#include<stdio.h>
main()
{
	char s[21];
	int i, k[21];
	printf("sを入力");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]の復号キー", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("復号済文字列は、%s", s);
}