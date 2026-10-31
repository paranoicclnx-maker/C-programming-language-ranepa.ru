/* Вводится номер дня, выдать название,
или "error" в случае неверного ввода */
/* 31.10.2026 */

 // 1. По номеру месяца - количество дней
// 1, 3, 5, 7, 8, 10, 12. 31 day
// 4, 6, 9, 11 — апрель, июнь, сентябрь, ноябрь (в каждом по 30 дней)
#include <stdio.h>
int main() {
	int month = 0;
	int day = 0;
	scanf("%d",&month);
	printf("Variant 2. switch ... case\n");
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		printf("days = %d",day);
		break;
	case 2:
		day = 28;
		printf("days = %d",day);
		break;
	
	case 4: case 6: case 9: case 11:
		day = 30;
		printf("days = %d",day);
		break;
	default:
		day = 0;
		printf("days ne naiden",month);
		break;
	}
	
	
	return 0;
}

