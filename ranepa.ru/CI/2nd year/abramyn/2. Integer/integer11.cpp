/* Integer11◦. Дано трехзначное число. 
Найти сумму и произведение его цифр. */

#include <stdio.h>
int main()
{
    int trex,dec,edin,sotn;
    scanf("%d",&trex);
    sotn = trex / 100;
    dec  = ( trex % 100 ) / 10;
    edin = trex % 10;
    int sum = sotn + dec + edin;
    int proiz = sotn * dec * edin;
    printf("%d %d",sum,proiz);
}