#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10];
	int i, w, target;
	for (i = 0; i < 20; i++) {
		data[i] = i++;
	}
	srand(time(0));
	for (i = 19,w=0;i>0; i--) {
		target = rand() % i;
		data[i] = w;
		data[target] = data[i];
		w = data[target];
		printf("%d ", target);
	}
	
}