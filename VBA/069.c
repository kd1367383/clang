#include<stdio.h>
main()
{
	int i=0, g=0,a;
	printf("�����F");
	while (scanf("%d", &a) != EOF) {
		g += a;
		i++;
		printf("�����F");
	}
	printf("���v��%d ���ρ�%.2f\n", g, (float)g/ i);
}