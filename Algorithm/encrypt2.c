#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k[21], i, n;
	char s[21];
	srand(time(0));
	printf("sを入力");
	scanf("%s", &s[0]);
	i = 0;
	while(s[i]!='\0'){
		k[i] = rand() % 6;
		s[i] = s[i] + k[i]; //もしくは　s[i] += k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("暗号化文字列sを表示%s\n",s);
	printf("暗号キーは、");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	
}
