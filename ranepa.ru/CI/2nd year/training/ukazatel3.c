#include <stdio.h>
int main()
{
	
	int a,b;
	scanf("%d %d",&a,&b);

	int *pa;
	pa = &a;
	
	int *pb;
	pb = &b;
	
	int d;
	
	printf("chislo1 = %d adress1 = %p \n chislo2 = %d adress2 = %p\n",*pa, pa,*pb,pb);
			scanf("%d",&d);
	if(*pa == b){
	
		*pa = &d;	// разыменнование
		printf("Сходи на адрес и положи %d\n",*pa);
	}
	else
	{
	
	
	*pa = &d;	//разыменнование
	printf("Сходи на адрес и положи %d\n",*pa);
	}

	printf("chislo = %d adress = %p\n",*pa, pa);
}
