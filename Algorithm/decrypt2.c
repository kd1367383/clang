#include<stdio.h>
main()
{
	char s[21];
	int i, k[21];
	printf("s�����");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]�̕����L�[", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("�����ϕ�����́A%s", s);
}