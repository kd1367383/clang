#include<stdio.h>
main()
{
	int su1, su2,d,kotae;
	printf("演算子を入力：");
		scanf("%d", &d);

	printf("２つの整数を入力：");
	scanf("%d%d", &su1, &su2);
	if (d == 1) {
		printf("%d\n", su1 + su2);
	}
	else {
		if (d == 2) {
			printf("%d\n", su1 - su2);
		}
	}
		  else {
			  if (d == 3) {
				  printf("%d\n", su1 * su2);
			  }

		}
		    else{
			 if (d == 4) {
				printf("%d\n", su1 / su2);
			}
			
		}
	
		
	
		
		
	

	}

