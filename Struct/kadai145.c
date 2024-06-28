#include<stdio.h>
struct fruit {
	char name[30];
	int price, point, number, total;
};
main()
{
	int i, j, total = 0;
	struct fruit kudamono[] = {{"peach",300,5,3,0},
							{"grape",200,4,10,2000},
							{"watermelon",1500,5,8,12000} };
	for (i = 0; i < 3; i++) {
		kudamono[i].total = kudamono[i].price * kudamono[i].number;
			total += kudamono[i].total;
		printf("¤•i–¼F\t%s\n", kudamono[i].name);
		printf("‰¿ŠiF\t%d‰~\t", kudamono[i].price);
		printf("‚¨‘E‚ß“xF\t");
		for (j = 0; j < kudamono[j].point; j++) {
			printf("š ");
		}

		printf("\nŒÂ”F\t\t%dŒÂ", kudamono[i].number);
		printf("\t\t‹àŠzF\t%d-\n", kudamono[i].total);
	}
}