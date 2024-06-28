#include<stdio.h>
main()
{
	char s[21];
	int i, k[21];
	printf("s‚ğ“ü—Í");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]‚Ì•œ†ƒL[", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("•œ†Ï•¶š—ñ‚ÍA%s", s);
}