#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("��������́F");
	scanf("%c", &flg);
	printf("��������́F");
	scanf("%d", &d1);
	printf("��������́F");
	scanf("%d", &d2);
	printf("��������́F");
	scanf("%d", &d3);
	switch (flg) {
	case 'd':
	case 'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("�ő�l��%d",d1);
			}
			else {
				printf("�ő�l��%d",d3);
			}
		}
		else {
			if (d2 > d3) {
				printf("�ő�l��%d",d2);
			}
			else {
				printf("�ő�l��%d",d3);
			}
		}
		break;
	case 's':
	case 'S':
		if (d1 < d2) {
			if (d1 < d3) {
				printf("�ő�l��%d", d1);
			}
			else {
				printf("�ő�l��%d", d3);
			}
		}
		else {
			if (d2 < d3) {
				printf("�ő�l��%d", d2);
			}
			else {
				printf("�ő�l��%d", d3);
			}
		}
		break;
	case 'g':
	case 'G':
		printf("���v��%d", d1 + d2 + d3);
		break;
	case 'h':
	case 'H':
		printf("���ς�%d", (d1 + d2 + d3) / 3);
		break;
	default:
		printf("ERROR");
	}
}