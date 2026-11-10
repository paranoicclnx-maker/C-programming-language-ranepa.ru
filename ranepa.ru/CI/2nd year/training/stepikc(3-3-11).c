#include <stdio.h>

int min(int a)
{
 return a / 60;        
}


int main(void) 
{
int sec = 0;
int result_min = 0;

scanf("%d",&sec);
result_min = min(sec);
sec = sec % 60;
printf("%d %d",result_min,sec);


return 0;
}

