#include<stdio.h>
#include<string.h>
void syou(int tbl[],int cnt);
void kou(int tbl[],int cnt);
main()
{
	char s[128];
	int data[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int i;
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í");
	scanf("%s", s);
	if (strcmp(s, "~‡") == 0) {kou(data, 8);}
	if (strcmp(s, "¸‡") == 0) { syou(data, 8); }
	for (i = 0; i < 8; i++) {
		printf("%d", data[i]);
	}
}
void syou(int tbl[], int cnt) {
	int i, j,w;
	for (i = 0; cnt > i; i++) {
		for (j = i + 1; cnt > j; j++) {
			if (tbl[i]<tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}
void kou(int tbl[], int cnt) {
	int i, j, w;
	for (i = 0; cnt > i; i++) {
		for (j = i + 1; cnt > j; j++) {
			if (tbl[i] > tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}