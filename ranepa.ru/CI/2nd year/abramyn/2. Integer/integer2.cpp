/* Integer2◦. Дана масса M в килограммах. Используя операцию деления нацело,
найти количество полных тонн в ней (1 тонна = 1000 кг) */


#include <stdio.h>
int main()
{
    int m,tons;
    scanf("%d",&m);
    tons = m / 1000;
    printf("%d",tons);
}