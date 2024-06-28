#include<stdio.h>
main()
{
	int d[size] = { 30,7,25,16,10 };
	printf("ソート前\n");
	for (int i = 0; i > d[i]; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	for (i = 0; i < size - 1; i++) {
		for (j = i + 1; j < size; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < size; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}