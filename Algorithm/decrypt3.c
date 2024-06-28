#include<stdio.h>
main()
{
	char s[21], k[21];
	int i;
	printf("s‚ğ“ü—Í");
	scanf("%s", &s[0]);
	printf("•œ†ƒL[‚ğ“ü—Í");
	scanf("%s", &k[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - (k[i] - '0');
		i++;
	}
	printf("•œ†Ï•¶š—ñ‚ÍA%s", s);
}