#include<stdio.h>
main()
{
	int i,j;
	float x[3][2],goukei;
	for (i = 0; i < 3; i++) {
		for (goukei = 0, j = 0; j <2; j++) {
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			goukei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n\n", i, goukei / 2);
	}
}