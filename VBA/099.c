#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1,"kCΉ",NULL},
							 {2,"ΒX§",NULL},
							 {3,"βθ§",NULL},
							 {4,"{ι§",NULL},
							 {5,"Hc§",NULL},
							 {6,"R`§",NULL},
							 {7,"§",NULL},
							 {DATA_END,"",NULL} };
	struct ken* p, * wp;

	//NΜέθ	
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//ΪIFΒX§ΜnextoΜlπ{ι§ΜAhXΙΟX
	//|C^pΙken_dataΜζͺAhXπγό
	p = ken_data;
	//|C^πgΑΔAΒX§ΜAhXπίι
	p++;
	// ΒX§Μp->nextΙ{ι§ΜAhXπγό
	p->next = p + 2;
	//NΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}