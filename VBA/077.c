#include<stdio.h>
void suuti(int d1, int d2, int d3, int *max, int *syo);
main()
{
	int d1, d2, d3, max, syo;
	printf("�������R���́F");
	scanf("%d%d%d", &d1, &d2, &d3);
	suuti(d1, d2, d3, &max, &syo);
	printf("�ő�l��%d �ŏ��l��%d", max, syo);
}
void suuti(int d1, int d2, int d3, int *max, int *syo) {
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*syo = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}
