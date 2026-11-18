/* Практика №4 — Каталог смартфонов с поиском
Сложность: средняя
Задача: написать программу, которая хранит каталог из 5 смартфонов и
 умеет находить самый дорогой.
Условия
1. Создай структуру Smartphone с полями:
   - model — название модели;
   - year — год выпуска;
   - price — цена.
2. Создай массив из 5 смартфонов.
3. Заполни массив разными моделями.
4. Используя цикл for, выведи все смартфоны.
5. Найди самый дорогой смартфон.
6. Выведи его модель, год выпуска и цену.
7. Посчитай среднюю стоимость всех смартфонов.
Данные для каталога
Модель	Год	Цена
Samsung S24	2024	75000
Xiaomi 14	2024	65000
iPhone 16	2024	95000
Google Pixel 9	2024	85000
OnePlus 13	2025	70000

Подсказки
Не готовый код, а направления для решения:
- for — для перебора всех элементов массива.
- if — для сравнения цен.
- Отдельная переменная max_price — для хранения максимальной цены.
- Отдельная переменная total — для подсчёта общей стоимости.
- Средняя стоимость = общая стоимость / количество смартфонов. */
#define N 5
#include <stdio.h>


struct Smartphone
{
    char model[25]; 
    int year;
    int price;
};
struct Smartphone phone[N] =
{
   {"Samsung S24", 2024 ,75000},
   {"Xiaomi 14", 2024 ,65000},
   {"iPhone 16", 2024 ,95000},
   {"Google Pixel 9", 2024 ,85000},
   {"OnePlus 13", 2024 ,70000}

};

int main()
{
    for(int i = 0; i < N; i = i + 1)
    {
    printf("\n%s %d %d\n" , phone[i].model , phone[i].year , phone[i].price);
    }

    int max_price = phone[0].price;
    
    for (int i = 0; i < N; i = i + 1)
    {
        if(max_price < phone[i].price)
        {
        max_price = phone[i].price; 
        }
    
    }
    printf("\nmax_price: %d\n",max_price);
    float total;
    
    for (int i = 0; i < N; i = i + 1)
    {
    total = total + phone[i].price;
    }
    printf("total: %d",total);
    float sred_price = total / N;
    printf("sred_price: %f",sred_price);
    
}