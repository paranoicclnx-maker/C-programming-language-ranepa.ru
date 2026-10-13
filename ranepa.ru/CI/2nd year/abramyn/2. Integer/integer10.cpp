/* Integer10◦. Дано трехзначное число. 
Вывести вначале его последнюю цифру
(единицы), а затем — его среднюю цифру (десятки). */

#include <stdio.h>
int main()
{
    int trex,dec,edin,sotn;
    scanf("%d",&trex);
    sotn = trex / 100;
    dec  = ( trex % 100 ) / 10;
    edin = trex % 10;
    printf("%d%d%d",edin,dec,sotn);
}