#include<stdio.h>
main()
{
	int i=0, j=0,ji=0;
	while (-999 != i) {
		printf("�����i-999�ŏI���j");
		scanf("%d", &i);
		j += i;
		ji++;
	}
	j += 999;
	printf("���v��%d\n", j);
	printf("���ρ�%d\n", j / ji);
}