#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33};
	printf("探索値をｓを入力");
	scanf("%d", &s);
	i = 0;
	d[10] = s;
	while (s != d[i]) {
		i++;
	}
	if (i >= 10) {
		printf("見つからなかった");
	}
	else {
		printf("%dがd[%d]で見つかりました", s, i);
	}
}