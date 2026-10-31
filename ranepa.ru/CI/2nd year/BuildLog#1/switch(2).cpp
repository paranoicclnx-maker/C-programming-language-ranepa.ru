 /* Вводится номер дня, выдать название, или "error" в случае неверного ввода 

По номеру месяца - время года  31.10.2026
*/ 
int main() {
	int month;
	scanf("%d",&month);
	printf("Variant 2. switch ... case\n");
	switch (month) {
	case 1:
		printf("Time years : ZIMA (1 SEZON)");
		break;
	case 2:
		printf("Time years : ZIMA (1 SEZON)");
		break;
		
	case 3:
		printf("Time years : Vesna (2 SEZON)");
		break;
		
	case 4:
		printf("Time years : Vesna (2 SEZON)");
		break;
	case 5:
		printf("Time years : Vesna (2 SEZON)");
		break;
	case 6:
		printf("Time years : Leto (3 SEZON)");
		break;
	case 7:
		printf("Time years : Leto (3 SEZON)");
		break;
	case 8:
		printf("Time years : Leto (3 SEZON)");
		break;
	case 9:
		printf("Time years : Osen (3 SEZON)");
		break;
	case 10:
		printf("Time years : Osen (3 SEZON)");
		break;
	case 11:
		printf("Time years : Osen (3 SEZON)");
		break;
	case 12:
		printf("Time years : Zima (1 SEZON)");
		break;
	default:
		printf("Time years : EROR NE VALIDATOR (1 SEZON)");
		break;
	}
	
	
	return 0;
}

