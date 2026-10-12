/*While4◦. Дано целое число N (>0). Если оно является степенью числа 3, то
вывести TRUE, если не является — вывести FALSE*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n % 3 == 0 )
    {
    n = n / 3;
    }

    if (n == 1)
    {
    printf("TRUE");
    }
    else
    {
    printf("FALSE");
    }
    return 0;
}