#include<stdio.h>
int add(int a, int b);//�v���g�^�C�v�錾
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n", kotae);
	printf("���Z���ʂ�%d�ł�\n",hiku(a,b));
	printf("��Z���ʂ�%d�ł�\n", kake(a, b));
	printf("���Z���ʂ�%d�ł�\n", wari(a, b));
}

//�֐�add�̋L�q
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}
int hiku(int a, int b) {
	return(a - b);
}
int kake(int a, int b) {
	return(a * b);
}
int wari(int a, int b) {
	return(a / b);
}