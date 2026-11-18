#include <stdio.h>
int main()
{
	
	int a,b;
	scanf("%d %d",&a,&b);
	int *pa = &a;
	int *pb = &b;
	int *pmax = 0;
	if(*pa > *pb)
	{
		pmax = pa;	
	}
	else
	{
		pmax = pb;	
	}
	printf("max = %d max(adress)= %p",*pmax, pmax);
}
