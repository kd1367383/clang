#include<stdio.h>
#include<stdilib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
//符号なし整数をUNITで再定義
typedef unsigned int UNIT;
typedef struct {	//Skill型構造体
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;
typedef struct {	//Spec型構造体
	char name[20];	
	int hp;
	int atk;
	int def;
	UNIT state;
}Spec;
typedef struct {	//Chara型構造体
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;
typedef struct {	//Mob型構造体
	Spec sp;
	int rate;
}Mob;
enum BitState
{
	Base =0,		//00000000	通常状態
	Poison=1<<0,	//00000001	毒状態
	Sleep=1<<1,		//00000010	眠り状態
	Paralysis=1<<2,	//00000100	マヒ状態
	Burn=1<<3,		//00001000	やけど状態
	AtkUp=1<<4,		//00010000	攻撃力アップ状態
	AtkDown=1<<5,	//00100000	攻撃力ダウン状態
};
void Displaystatus(UNIT s);
void ChangeFlg(UNIT* s);
void ClearFlg(UNIT* s);
main()
{
	UNIT myState = Base;
	ChangeFlg(&myState);
	Displaystatus(myState);
	ClearFlg(&myState);
	Displaystatus(myState);
}
void Displaystatus(UNIT s) {
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paralysis) {
		printf("マヒ\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s & Base) {
		printf("通常状態\n");
	}
	printf("******************\n");
}
void ChangeFlg(UNIT* s) {
	int a;
	while (1) {
		printf("どの状態にしますか\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃力アップ 6:攻撃力ダウン 0:終了＞");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}
void ClearFlg(UNIT* s) {
	int a;
	while (1) {
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃力アップ 6:攻撃力ダウン 7:リセット 0:終了＞");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;

		case 7:
			*s = Base;
			break;
		}
	}
}