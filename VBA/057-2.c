#include<stdio.h>
main()
{
	int tbl [] [3] = { {10,20,30},
						{40,50,60},
						{70,80.90} };
	int* p_tbl, i;
	p_tbl = tbl[0];
	printf("２次元配列tblの内容\n");
	for (i = 0; i < 3*3; i++) {
		if (i % 3 == 1) {
			printf("%d ", *p_tbl);

		}
		p_tbl++;
	}
}