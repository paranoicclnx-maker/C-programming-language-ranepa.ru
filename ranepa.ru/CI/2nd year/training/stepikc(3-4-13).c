// Решени 1 (просто 2 иф)

// #include <stdio.h>
// int main()
// {
// int health = 0;
// int level = 0;
// int has_key = 0;
// int result = 0;
// scanf("%d %d %d",&health,&level,&has_key);
// if(health > 0)
// {
//     if(level >= 5 || has_key == 1)
//     {
//       result = 1;
//     }
//         else
//         {
//           return 0;
//         }
// }
// else
// {
//   return 0;
// }
// printf("%d",result);
// }



// решешение 2 (через отдельную функцию и 2 иф)
// #include <stdio.h>


// int proverka(int health1, int level1, int has_key1)
// {
// if (health1 > 0 ) // если хп больше 0 выполняем проверку след условия если уровень равен или больше 5 
// {
//   if(level1 >= 5 || has_key1 == 1)
//   {
//     return 1;
//   }
//  else

//   {
//     return 0;
//   }

// }
// else
// {
//   return 0;
// }
// }


// функция которая собирает все вместе
// int main(void)
// {
// int health = 0;
// int level = 0;
// int has_key = 0;
// int result = 0;
// scanf("%d %d %d",&health,&level,&has_key);
// result = proverka(health, level, has_key);
// printf("%d",result);

// }


// решение 3 (  3 функции) 
#include <stdio.h>


int healt(int health)
{
if (health > 0)
{
  return 1;
}
else
{
  return 0;
}
}

int lvl(int level)
{
if (level >= 5)
{
  return 1;
}
else
{
  return 0;
}
}


int hash(int has_key)
{
if (has_key == 1)
{
  return 1;
}
else
{
  return 0;
}
}



//функция которая собирает все вместе
int main(void)
{
int health = 0;
int level = 0;
int has_key = 0;
int result_hp = 0;
int result_lvl = 0;
int result_hash = 0;
int result = 0;
scanf("%d %d %d",&health,&level,&has_key);
result_hp = healt(health); // берет значение которое отдает эта функция и записывает в результ
result_lvl = lvl(level); // берет значение которое отдает эта функция и записывает в результ
result_hash = hash(has_key); // берет значение которое отдает эта функция и записывает в результ
if (result_hp == 1 && (result_lvl == 1 || result_hash == 1)) // условие при котором действительно
{
  result = 1;
}
else
{
  result = 0;
}


printf("%d",result);

}