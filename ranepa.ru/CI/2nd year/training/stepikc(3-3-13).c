
// обновленние хп функция
int update1 (int received_damage , int health)
{
  return health - received_damage;
}
  
  

// обновленние золота функция 
int update2 ( int reward , int gold)
{
  return gold + reward;
}
// обновленный урон функция 
int update3 (int multiplier,int damage)
{
  return damage * multiplier;
}



int main(void)
{
  int health1;
  int gold1;
  int damage1;
  scanf("%d %d %d\n",&health1, &gold1, &damage1);
  int received_damage1;
  int reward1;
  int multiplier1;
 
  int result_hp;
  int result_gold;
  int result_damage;
  scanf("%d %d %d", &received_damage1, &reward1, &multiplier1);
  result_hp = update1(received_damage1, health1);
  result_gold = update2(reward1, gold1);
  result_damage = update3(multiplier1, damage1);
  printf("%d %d %d", result_hp, result_gold, result_damage);
  return 0;
}

