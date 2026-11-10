#include <stdio.h>

int menus(int a,char menu ,int b)

{
int result;

       switch(menu)
   {
        case '+':
        result = a + b;
        break;

        case '-':
        result = a - b;
        break;

        case '*':
        
        result = a * b;
        break;

        case '/':
        if (b != 0)
        {
        result = a / b;
        break;
        }
        else
        {
        printf("ERROR\n");
        break;       
        }

        case '%':
        if (b != 0)
        {
        result = a % b;
        break;
        }
        else
        {
        printf("ERROR\n");
        break;     
        }
        
        default:
        printf("ERROR\n");
        break;
   }
   return result;
}

int main(void) 
{
   int a = 0;
   int b = 0;
   char menu ;
   int result1 ;
   scanf("%d %c %d",&a,&menu,&b);
   result1 = menus(a,menu,b);
   printf("%d",result1);

  
}





