#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k[21], i, n;
	char s[21];
	srand(time(0));
	printf("s�����");
	scanf("%s", &s[0]);
	i = 0;
	while(s[i]!='\0'){
		k[i] = rand() % 6;
		s[i] = s[i] + k[i]; //�������́@s[i] += k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("�Í���������s��\��%s\n",s);
	printf("�Í��L�[�́A");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	
}
