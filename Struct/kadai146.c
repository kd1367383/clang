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
	struct fruit* p;
	p = kudamono;
	for (i = 0; i < 3; i++) {
		(p+i)->total = (p + i)->price * (p + i)->number;
			total += (p + i)->total;
		printf("���i���F\t%s\n", (p + i)->name);
		printf("���i�F\t%d�~\t", (p + i)->price);
		printf("���E�ߓx�F\t");
		for (j = 0; j < (p + j)->point; j++) {
			printf("�� ");
		}

		printf("\n���F\t%d��", (p + i)->number);
		printf("\t���z�F\t\t��%d-\n", (p + i)->total);
	}
	printf("���v���z����%d-\n", total);
}