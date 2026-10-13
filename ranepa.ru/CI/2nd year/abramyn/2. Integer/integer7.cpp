/*Integer7◦. Дано двузначное число. 
Найти сумму и произведение его цифр. */

#include <stdio.h>
int main()
{
    int a,b,sum,proiz;
    scanf("%d",&a);
    b = a / 10;
    a = a % 10;
    sum =   b + a;
    proiz = b * a;
    
    printf("%d %d",sum,proiz);
}