#include <stdio.h>

int main(void) 
{
 int left = 0;
 int right = 0;
 int value = 0;
 int count = 0;
 scanf("%d %d %d",&left,&right,&value);
 if(left >= value || right >= value )
 {
   count = 1;
   printf("%d",count);
 }
    else
    {
        count = 0;
        printf("%d",count);
    }
    
    return 0;
}