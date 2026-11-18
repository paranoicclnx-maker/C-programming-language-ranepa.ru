/*Практика №1 — Информация о студенте
Задача: создай структуру Student, 
которая будет хранить информацию 
об одном студенте.
Условия
1. Создай структуру Student.
2. Добавь три поля:
   - name — имя (char, массив на 30 символов).
   - age — возраст (int).
   - grade — оценка (float).
3. Создай одну переменную Student1 на основе 
структуры.
4. Обратись к полю age через оператор    .
Подсказки
- Для объявления структуры используется struct.
- Для создания переменной используется struct 
Student имя_переменной;.
- Для обращения к полю используется точка . */



#include <stdio.h>


struct Student 
{
char name[20];
int age;
float grade;
};

struct Student student_info_001;
struct Student student_info_002;


int main()
{
    
scanf("%19s %d %f",student_info_001.name , &student_info_001.age , &student_info_001.grade);
printf("%s %d %f",student_info_001.name , student_info_001.age , student_info_001.grade);

scanf("%19s %d %f",student_info_002.name , &student_info_002.age , &student_info_002.grade);
printf("%s %d %f",student_info_002.name , student_info_002.age , student_info_002.grade);


}
