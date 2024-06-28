#include<stdio.h>
main()
{
	int h, m, s;
	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &s);
	if (5000 >= s) {
		h=s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[F“ü—Í‚Í‚T‚O‚O‚O‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}