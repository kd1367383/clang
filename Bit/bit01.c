#include<stdio.h>
enum BitState
{
	Base =0,		//00000000	�ʏ���
	Poison=1<<0,	//00000001	�ŏ��
	Sleep=1<<1,		//00000010	������
	Paralysis=1<<2,	//00000100	�}�q���
	Burn=1<<3,		//00001000	�₯�Ǐ��
	AtkUp=1<<4,		//00010000	�U���̓A�b�v���
	AtkDown=1<<5,	//00100000	�U���̓_�E�����
};
typedef unsigned int UNIT;
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
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("�}�q\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s & Base) {
		printf("�ʏ���\n");
	}
	printf("******************\n");
}
void ChangeFlg(UNIT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���̓A�b�v 6:�U���̓_�E�� 0:�I����");
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���̓A�b�v 6:�U���̓_�E�� 7:���Z�b�g 0:�I����");
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