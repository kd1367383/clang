#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33};
	printf("’Tõ’l‚ð‚“‚ð“ü—Í");
	scanf("%d", &s);
	i = 0;
	d[10] = s;
	while (s != d[i]) {
		i++;
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d‚ªd[%d]‚ÅŒ©‚Â‚©‚è‚Ü‚µ‚½", s, i);
	}
}