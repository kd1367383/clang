#include<stdio.h>
main()
{
	char data[]="Apple";
	int i=0;
	printf("ˆê•¶Žš‚¸‚Â“ü—Í\n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &data[0]);
}