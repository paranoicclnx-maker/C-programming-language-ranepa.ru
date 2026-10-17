/* Найти 1+3+5+..+n, если n - нечетное, или 1+3+5+..+(n-1), если n - четное. */
#include <stdio.h>
int main()
{
	int N;
	int i;
	int sum = 0;
	scanf("%d",&N);
		for( i = 1; i <= N; i = i + 2)
		{
			sum = sum + i;	
		}
	printf("%d",sum);
}

