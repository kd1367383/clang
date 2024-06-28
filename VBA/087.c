#include<stdio.h>
main(int argc, char* argv[])
{
	printf("argc=%d\n", argc);
	int answer ,data1,data2;
	data1 = atoi(argv[1]);
	data2 =atoi( argv[2]);
	answer = data1 + data2;
	printf("%d+%d=%d\n", data1, data2, answer);
}