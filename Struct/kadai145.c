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
		printf("���i���F\t%s\n", kudamono[i].name);
		printf("���i�F\t%d�~\t", kudamono[i].price);
		printf("���E�ߓx�F\t");
		for (j = 0; j < kudamono[j].point; j++) {
			printf("�� ");
		}

		printf("\n���F\t\t%d��", kudamono[i].number);
		printf("\t\t���z�F\t��%d-\n", kudamono[i].total);
	}
}