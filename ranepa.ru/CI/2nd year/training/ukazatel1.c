#include <stdio.h>
int main()
{
	
	int a,b;
	scanf("%d %d",&a,&b);
	int *pa = &a;
	int *pb = &b;
	
	printf("%p a = %d , %p b = %d ",pa,*pa,pb,*pb);
	
	
	
	
	
}
