#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k, i;
	printf("�����o���܂���\n");
	printf("1�F�O�[ 2�F�`���L 3�F�p�[");
	scanf("%d", &i);
	srand(time(0));
	k = rand() % 3 + 1;
	if (i == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	else {
		if (i == 2) {

			printf("�v���C���[�̓`���L�ł�\n");
		}
		else {
			if (i == 3) {
				printf("�v���C���[�̓p�[�ł�\n");
			}
		}
	}
	if (k == 1) {
		printf("�R���s���[�^�[�̓O�[�ł�\n\n");
	}
	else {
		if ( k== 2) {

			printf("�R���s���[�^�[�̓`���L�ł�\n\n");
		}
		else {
			if (k == 3) {
				printf("�R���s���[�^�[�̓p�[�ł�\n\n");
			}
		}
	}
	if (i == 1 && k == 2 || i == 2 && k == 3 || i == 3 && k == 1) {
		printf("�v���C���[�̏����ł�\n");
	}
	else {
		if (i == 1 && k == 1 || i == 2 && k == 2 || i == 3 && k == 3) {
			printf("���������ł�");
		}
		else {
			printf("�v���C���[�̕����ł�");
		}
	}
}