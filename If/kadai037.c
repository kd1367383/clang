#include<stdio.h>
main()
{
	int s,k;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H");
	scanf("%d", &s);
	if (90 <= s && 100 >= s) {
		k = 5;
	}
	else {
		if (80 <= s && 90 > s) {
			k = 4;
		}
		else {
			if (50 <= s && 80 > s) {
				k = 3;
			}
			else {
				if (30 <= s && 50 > s) {
					k = 2;
				}
				else {
					k = 1;
				}
			}

		}
	}
	printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu%dv‚Å‚·", k);
}