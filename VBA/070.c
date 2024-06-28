#include<stdio.h>
int add(int a, int b);//プロトタイプ宣言
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", kotae);
	printf("減算結果は%dです\n",hiku(a,b));
	printf("乗算結果は%dです\n", kake(a, b));
	printf("除算結果は%dです\n", wari(a, b));
}

//関数addの記述
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