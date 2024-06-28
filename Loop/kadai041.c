#include<stdio.h>
main()
{
	int i=0, j=0,ji=0;
	while (-999 != i) {
		printf("整数（-999で終了）");
		scanf("%d", &i);
		j += i;
		ji++;
	}
	j += 999;
	printf("合計＝%d\n", j);
	printf("平均＝%d\n", j / ji);
}