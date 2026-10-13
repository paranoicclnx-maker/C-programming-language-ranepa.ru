/* Integer8◦. Дано двузначное число. 
Вывести число, полученное при перестановке цифр исходного числа */

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b = a / 10;
    a = a % 10;
    
    printf("%d %d",a,b);
}