/*# Практическая работа
## Разработка программы «Конвертер единиц измерения длины» на языке C

### 1. Цель работы

Разработать консольную программу на языке C для перевода единиц измерения длины. Закрепить навыки работы с переменными, условиями, циклами, функциями, массивами и оператором `switch`.

### 2. Главное меню программы

При запуске программы пользователь должен увидеть меню:

```text
================================
КОНВЕРТЕР ДЛИНЫ
================================
[1] Перевод единиц измерения
[2] История переводов
[3] Выход
================================
Ваш выбор:
```

Программа должна повторно показывать главное меню, пока пользователь не выберет выход.

### 3. Выбор направления перевода

При выборе первого пункта главного меню появляется дополнительное меню:

```text
================================
ВЫБОР ПЕРЕВОДА
================================
[1] Перевод выбранной единицы в метры
[2] Перевод метров в выбранную единицу
================================
Ваш выбор:
```

### 4. Выбор единицы измерения

Пользователь должен иметь возможность выбрать одну из пяти единиц:

```text
================================
ЕДИНИЦЫ ИЗМЕРЕНИЯ
================================
[1] Дециметр
[2] Километр
[3] Метр
[4] Миллиметр
[5] Сантиметр
================================
Ваш выбор:
```

После выбора единицы программа запрашивает длину отрезка.

### 5. Правила перевода

Программа должна поддерживать следующие коэффициенты:

| Единица | В метры |
|---|---:|
| Дециметр  | 0,1  |
| Километр  | 1000 |
| Метр      |   1  |
| Миллиметр | 0,001|
| Сантиметр | 0,01 |

При переводе в метры необходимо умножить введённое значение на коэффициент.

При обратном переводе из метров необходимо разделить значение на коэффициент.

### 6. История переводов

Программа должна сохранять результаты выполненных переводов в массив.

Требования:
- Максимальное количество записей — 10.
- Каждый новый результат записывается в следующую свободную ячейку.
- При выборе пункта «История переводов» программа выводит все сохранённые результаты.
- Если история пустая, программа должна сообщить об этом.
- При заполнении массива программа не должна записывать данные за его пределами.

### 7. Проверка данных

Предусмотреть обработку ошибок:
- Неверный номер пункта меню.
- Неверный номер единицы измерения.
- Некорректный ввод числа.
- Попытка выполнить перевод при недопустимой длине.
- Пустая или заполненная история.

### 8. Технические требования


При разработке программы необходимо использовать:

1. `int` и `double` для хранения данных.
2. `printf` и `scanf` для вывода и ввода.
3. `if / else` для проверки условий.
4. `switch / case` для обработки пунктов меню.
5. Циклы `for` или `while` для повторения действий.
6. Пользовательские функции для разделения программы на отдельные задачи.
7. Массив для хранения истории переводов.
8. `return` для возврата результатов из функций.

### 9. Результат работы

В результате должна получиться консольная программа, которая позволяет многократно переводить единицы длины, просматривать историю выполненных операций и завершать работу через главное меню.*/

#include <stdio.h>
#define dc 0.1 // *
#define kl 1000.0 // *
#define mm 0.001 // *
#define sm 0.01 // *
 // обратный перевод из метров в другие ед измерения
#define dc1 10 // *
#define kl1 1000 // /
#define mm1 1000 // *
#define sm1 100 // *



int get_menu_main(void);
int get_menu_main_translate(void);
double get_menu_main_translate_metr(void);

int main(void) 
{
	
	int menu = 0;
	int menu_translate  = 0;
	int menu_translate_1 = 0;
	int menu_translate_2 = 0;
	double result = 0.0;
	for(int i=0;i<2;i++)
	{
		
	
	menu = get_menu_main();
	menu_translate = get_menu_main_translate();
	result = get_menu_main_translate_metr();
	printf("result: %lf",result);
	}
}


int get_menu_main(void)
{
	int menu_main = 0;
	int menu_translate_1 = 0;
	int menu_translate_2 = 0;
	while( menu_main !== 3)
	{
	
	printf("================================\n");
	printf("Главное меню\n");
	printf("================================\n");
	printf("  [1] Перевод единиц измерения \n");
	printf("  [2] История \n");
	printf("  [3] Выход \n");
	printf("================================\n");
	printf("  Vash vybor: ");
	scanf("%d",&menu_main);
	if( menu_main == 1)
	{
	break;
	int menu_main_translate = 0;
	printf("================================\n");
	printf("	Меню переводов вариантов    \n");
	printf("================================\n");
	printf("[1] перевод ед измерения в метры\n");
	printf("[2] перевод метров в ед измерения\n");
	printf("================================\n");
	printf("  Vash vybor: ");  
	scanf("%d",&menu_main_translate);
	switch(menu_main_translate)
	{
		case 1:
		menu_translate_1 = get_menu_main_translate_metr(); // вызов функции меню из ед измерения в метры
		break;
		case 2:
		menu_translate_2 = get_menu_main_translate_of_metr();  // вызов обратного меню перевода ед измерений
		break;
		case default:
			printf("\nТакого варианта нету (EROR 404)\n вы ввели число %.4lf",menu_main_translate);
			break;

	}

		
	}
										
}
	
	
}
double  get_menu_main_translate_metr(void)
{
	int menu_main_translate_metr = 0;
	double metr = 0.0;
  	double result_translate_metr = 0.0;
 	double dlina = 0.0;
	printf("Введите длину отрезка: ");
	scanf("%lf",&dlina);
	if(dlina > 0)
	{
		printf("-----------MENU---------");
		printf("\n1) дециметр");
		printf("\n2) километр");
		printf("\n4) миллиметр");
		printf("\n5) сантиметр	");
		printf("  Vash vybor: ");  
		scanf("%d",&menu_main_translate_metr);
		switch(menu_main_translate_metr)
		{
		case 1:
			result_translate_metr = dlina * dc;
			break;
			
		case 2:
			result_translate_metr = dlina * kl;
			break;
			
		case 3:
			result_translate_metr = dlina * mm;
			break;
			
		case 4:
			result_translate_metr = dlina * sm;
			break;

			case default:
			printf("\nТакого варианта нету (EROR 404)\n вы ввели число %.4lf",menu_main_translate_metr);
			break;
		}
	}
	else 
	{
		printf("\ndlina v vedena ne verno EROR 404");
	}
}


	double  get_menu_main_translate_of_metr(void)
{
	int menu_main_translate_of_metr = 0;
	double metr = 0.0;
  	double result_translate_of_metr = 0.0;
 	double dlina = 0.0;
	printf("Введите длину отрезка в метрах для перевода в ед изм ");
	scanf("%lf",&dlina);
	if(dlina > 0)
	{
		printf("-----------MENU---------");
		printf("\n1) дециметр");
		printf("\n2) километр");
		printf("\n3) миллиметр");
		printf("\n4) сантиметр");
		printf("  Vash vybor: ");  
		scanf("%d",&menu_main_translate_of_metr);
		switch(menu_main_translate_of_metr)  // выбор перево из метров в другие ед 
		{
		case 1:
			result_translate_of_metr = dlina * dc1; //  m * 10 = dc
			break;
			
		case 2:
			result_translate_of_metr = dlina / kl1; // m / 1000 = kl
			break;
			
		case 3:
			result_translate_of_metr = dlina * mm1; // m * 1000 = mm
			break;
			
		case 4:
			result_translate_of_metr = dlina * sm1; // m * 100 = sm
			break;

		case default:
		printf("\nТакого варианта нету (EROR 404)\n вы ввели число %.4lf",menu_main_translate_of_metr);
		break;

		}
	}
	else 
	{
		printf("\ndlina v vedena ne verno EROR 404");
	}
	
	
	
	return result_translate_of_metr;
	
}
