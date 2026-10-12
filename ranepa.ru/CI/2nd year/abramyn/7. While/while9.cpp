/*While9. Дано целое число N (>1). Найти наименьшее целое число K, при
котором выполняется неравенство 3K > N */

#include <stdio.h>
int main()
{
int N;
int K = 1;
scanf("%d",&N);
if( N > 1)
{
    while (3 * K <= N)
    {
     K++;
    }
    
}
 printf("Наименьшее K = %d\n", K);
}