#include<stdio.h>
main()
{
	int g, h, su,i;
	printf("���́H");
	scanf("%d", &su);
	g = 0;
	h = 0;
	for(i=0;su!=-999;i++)
	{
		g += su;
		printf("���́H");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("���v��%d ���ρ�%.2f", g,(float)g/i);
	}
}