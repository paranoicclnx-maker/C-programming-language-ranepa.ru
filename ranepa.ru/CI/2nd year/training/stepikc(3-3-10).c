#include <stdio.h>
int sum(int a,int b)
{
return a + b;
}


int dev(int a,int b)
{
return a - b;
}

int mnohi(int a,int b)
{
return a * b;
}

int main() 
{
    int x,y;
    int res_sum = 0;
    int res_devo = 0;
    int res_mno = 0;
    scanf("%d %d",&x,&y);
    res_sum = sum(x,y);
    printf("%d\n",res_sum);
    res_devo = dev(x,y);
    printf("%d\n",res_devo);
    res_mno = mnohi(x,y);
    printf("%d\n",res_mno);
   
    return 0;
}