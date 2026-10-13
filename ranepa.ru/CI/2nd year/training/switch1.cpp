/* Задача 5: Меню программы
Реализуйте простое меню с пунктами:
Приветствие
Текущее время 
Выход*/

#include <stdio.h>
#include <time.h>
int main()
{
    int number;
    char name[100];
  
    printf("===== МЕНЮ =====\n");
    printf("Для перехода напишите цифру\n");    
    printf("1) Приветствие \n");
    printf("2) Текущее время \n"); // заглушка
    printf("3) Выход \n");
     scanf("%d",&number);
   
     switch (number)
     {
     case 1: 
     {
        printf("Введите ваше имя. \n");
        scanf("%99s",name);
        printf("Выбрано меню \" 1) Приветствие \" \n");
        printf("Привет %99s \n",name);
        break;
     }
    case 2: {
    
        printf("Выбрано меню \" 2) Текущее время \" \n");
        time_t rawtime;
        time(&rawtime);
        struct tm *info = localtime(&rawtime); // время сделано не мной а благодаря алисе которая взяла выше строчки с открытых источников
        printf("Текущее время и дата: %s", asctime(info));
        break;
    }
    case 3: 
    {
        printf(" Завершение работы. Пока! \n");
        break;
    }
     
    default:
        printf("Пункта %d не существует. Попробуйте снова.\n", number);
        break;
     
    }


    

    
     
     

   }