/* Практика №5 — Анализ каталога смартфонов
Сложность: средняя+
Задача: создать программу для анализа каталога из 5 смартфонов.
1. Структура
Создай структуру Smartphone с полями:
- model — модель;
- year — год выпуска;
- price — цена.
2. Массив
Создай массив из 5 смартфонов и заполни его данными:
Модель	Год	Цена
Samsung S24	2024	75000
Xiaomi 14	2024	65000
iPhone 16	2024	95000
Google Pixel 9	2024	85000
OnePlus 13	2025	70000

3. Задания
1. Выведи все смартфоны с помощью цикла for.
2. Найди самый дорогой смартфон (пока достаточно определить его цену).
3. Найди самый дешёвый смартфон (также достаточно определить цену).
4. Посчитай общую стоимость всех смартфонов.
5. Посчитай среднюю стоимость смартфона.
6. Определи, сколько смартфонов стоят дороже 75 000 рублей.
7. Определи, сколько смартфонов выпущено в 2024 году. */


#include <stdio.h>
#define N 5

struct Smartphone 
{
char model[25];
int year;
int price;
};

struct Smartphone phone[N] =
{
   {"Samsung S24" , 2024 ,75000 },
   {"Xiaomi 14" , 2024 , 65000 },
   {"iPhone 16" , 2024 , 95000 },
   {"Google Pixel 9" , 2024 , 85000 },
   {"OnePlus 13" , 2025 , 70000 },
};

int main()
{
    int count = 0;
    for (int i = 0; i < N; i = i + 1)
    {
        count = count + 1;
        printf("%s %d %d\n",phone[i].model , phone[i].year , phone[i].price);
        
    }
    int max_price = phone[0].price;
    for (int i = 0; i < N; i = i + 1)
    {
        if(max_price < phone[i].price)
        {
         max_price = phone[i].price;   
        }
    }
    printf("\nMAX_PRICE: %d",max_price);
    int min_price = phone[0].price;
    for (int i = 0; i < N; i = i + 1)
    {
        if(min_price > phone[i].price)
        {
            min_price = phone[i].price;
        }
    }
    printf("\nMINIMUM_PRICE: %d",min_price);
    int summ_price;
    for (int i = 0; i < N; i = i + 1)
    {
    summ_price = summ_price + phone[0].price;
    }
    
    printf("\nSUMMA: %d",summ_price);
  
    
    float sred_summ = summ_price / count;
    printf("\nSRED_SUMMA: %f",sred_summ);
    int count75;
    for (int i = 0; i < N; i = i + 1)
    {
        if (phone[i].price > 75000)
        {
            count75 = count75 + 1;
        }
        
    }
    printf("\nkol-vo phone price < 75000 = %d",count75);

    int count_year = 0;
    for (int i = 0; i < N; i = i + 1)
    {
        if (phone[i].year == 2024)
        {
           count_year = count_year + 1;
        }
        
    }
    printf("\n phone year = 2024 kol-vo = %d",count_year);
}
