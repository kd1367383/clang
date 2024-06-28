#include<stdio.h>
main()
{
	int su1, su2,su3;
	printf("®”1H\n");
	scanf("%d", &su1);
	printf("®”2H\n");
	scanf("%d", &su2);
	su3 = 0;
	if (su1 > su2) {
		if (su2 >= 0) {
			su3 = su1 - su2;
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su2, su1,su3)
		}
		else {
			if (su1 < 0) {
				su3 = su1 - su2;
				printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su2, su1, su3)
			}
			else {
				su2 = su2 * -1;
				su3 = su1 + su2;
				printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su2, su1, su3)
			}
		}
		
	}
	else {
		if{
			if (su1 >= 0) {
				su3 = su2 - su1;
				printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su1, su2, su3)
			}
			else {
				if (su2 < 0) {
					su3 = su1 - su2;
					printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su1, su2, su3)
				}
				else {
					su1 = su1 * -1;
					su3 = su1 + su2;
					printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su1, su2, su3)
				}
			}
		}
		else {
			printf
		}
	}
}