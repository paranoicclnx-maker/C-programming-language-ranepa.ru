/*
из за невнимательности 7 раз проверил каждую строчку а все было из за того что я не поставил пробел между %d и \n в первой строке scanf и потому что вначале был запрос лвл а не золота.
*/

#include <stdio.h>

int proverka(int lvl, int requst_lvl, int gold, int price, int count)
{
  if(lvl >= requst_lvl && gold >= price * count)
  {
    return 1;
  }

return 0;
}




int main(void)
{
int level1;
int gold1;
int price1;
int count1;
int required_level1;
int result = 0;
scanf("%d %d \n",&gold1,&level1);
scanf("%d %d %d",&price1,&count1,&required_level1);
result = proverka(level1, required_level1, gold1, price1, count1);
printf("%d",result);
}