/* 3. Найти n! = 1 * 2 * 3 * … * n. 0! = 1. n – неотрицательное число */
#include <stdio.h>
int main()
{
	int N;
	int i;
	int sum = 1;
	scanf("%d",&N);
	for(i = 1 /* 1 потому что факториал 0 = 1*/; i <= N;i++){
		sum = sum * i;
		
	}
	
	printf("%d",sum);
}

