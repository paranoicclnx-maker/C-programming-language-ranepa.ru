/* Case5. Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление. Дан
номер действия N (целое число в диапазоне 1–4) и вещественные числа A
и B(Bнеравно 0). Выполнить над числами указанное действие и вывести
результат.*/

#include <stdio.h>
int main()
{
	int n = 0;
	double a = 0.0;
	double b = 0.0;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("-----------MENU---------");
	printf("\n1) addition(+) ");
	printf("\n2) subtraction(-) ");
	printf("\n3) multiplication(*) ");
	printf("\n4) division(/) ");
	
	scanf("%d",&n);
	switch (n) {
	case 1:
	double summ = 0.0;
	summ = a + b;
	printf(" a + b = %0.f",summ);
	
		break;
	case 2:
		double subt = 0.0;
		subt = a - b;
		printf(" a - b = %0.f",subt);
		break;
	case 3:
		double multi = 0.0;
		multi = a * b;
		printf(" a * b = %0.f",multi);
		break;
		
	case 4:
		if( b == 0)
		{
			printf(" A / 0  EROR");
		}
		else{
		double div = 0.0;
		div = a / b;
		printf(" a / b = %0.f",div);
		}
		break;
	default:
		printf("V MENU NETY TAKOGO RAZDELA");
		break;
	}
	
	
}
