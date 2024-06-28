#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;
	srand(time(0));
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);

}