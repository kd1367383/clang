#include<stdio.h>
main()
{
	int score = 0,max_score;
	char ch,name[20],max_name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("�ō����_�@���O�F%s �n�C�X�R�A�F%d\n",
			max_name, max_score);
	}
	else {
		printf("�t�@�C�����ǂݎ��܂���\n") {
			return;
		}
	}
	printf("�v���C���[������́F");
	scanf("%s", name);
	while(1){
		printf("���݂̃X�R�A�F%d('e'�ŏI���j\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (max_score < score) {
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V�I\n");
		}
		else {
			printf("�t�@�C���ɏ������߂܂���\n");
			return;
		}
		
	}
}