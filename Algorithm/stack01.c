#include<stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;
void display(void);
int push(int d);
int pop(int* pd);
main()
{
	int key, data, result;
	do {
		printf("\n\n���v�b�V����i�A�|�b�v�̈́�����͂��ā�");
		key = getche();
		printf("\n");

		if (key = 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n�������X�^�b�N�������ς��ł�������\n");
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n�������X�^�b�N����ł�������\n");
			}
			else {
				printf("�X�^�b�N����f�[�^�i%d�j�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă��鏊�i���݂�sp��%d�j", sp);
		}
		printf("\n");
	}
	return;
}