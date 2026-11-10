/*
из за невнимательности 7 раз проверил каждую строчку а все было из за того что я не поставил пробел между %d и \n в первой строке scanf и потому что вначале был запрос лвл а не золота.
*/

#include <stdio.h>


void proverka(int n)
{
if( n > 0)
{
  printf("positive");
}
if( n < 0)
{
  printf("negative");

}
else
{
  printf("zero");
}





int main(void)
{
int number;
int result = 0;
scanf("%d",&number);
result = proverka(number);

}