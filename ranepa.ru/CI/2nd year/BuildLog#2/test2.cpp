/*Case6. Единицы длины пронумерованы следующим образом: 
1.миллиметр 2.сантиметр 3.дециметр 4.километр
 Дан номер еди- 22 ницы длины (целое число в диапазоне 1–5) и длина отрезка в этих единицах (вещественное число). 
 Найти длину отрезка в метрах*/
#define mm 0.001
#define sm 0.01
#define dc 0.1
#define kl 1000.0
#define N 3


#include <stdio.h>
int main() 
{
double history[N];
double result = 0.0;
double dlina = 0.0;
int menu_main = 0;
int count = 0;
    while(menu_main != 6)
    {
    
    

    printf("================================\n");
	printf("Выберите ед измерения \n");
	printf("================================\n");
	printf("  [1] Миллиметр \n");
	printf("  [2] Сантиметр \n");
	printf("  [3] Дециметр \n");
    printf("  [4] Километр \n");
	printf("  [5] История \n");
    printf("  [6] Выход \n");
	printf("================================\n");
	printf("  Vash vybor: ");
	scanf("%d",&menu_main);

    if(menu_main >= 1 && menu_main <= 4) // menu ot 1 do 4 (1 2 3 4)
{
    printf("================================\n");
    printf("Введите длину отрезка: "); 
    printf("================================\n");
	printf("  Vash vybor: ");
    scanf("%lf", &dlina);
}
    else if(dlina <= 0)
{
    printf("Ввели длину  <= 0 (EROR 404): ",dlina); 
    printf("Перезапустите программу она не отвечает из за ввода такого условия"); 
}
    
    else
    {
    

    switch(menu_main)
    {
        // mm
        case 1:
        
        result = dlina * mm;
        break;
        // sm
        case 2:
        
        result = dlina * sm;
        break;
        // dm
        case 3:
        
        result = dlina * dc;
        break;
        //kl
        case 4:
        
        result = dlina * kl;
        break;
        
    }
        printf("Результат: %.4lf м\n", result);
        count = count + 1;

        if(history[])
        {

        }
    }
        
    }
    }
    

