#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","sinkansen" };
	for (int i = 0; i < 3; i++) {
		printf("%s\n",p_ride[i]);
	}
}