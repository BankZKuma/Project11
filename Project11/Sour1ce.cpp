#include<stdio.h>
#include<string.h>
int max(int,int);
int min(int, int);
struct dreamCar {
	char name[10];
	int speed;
	int price;
};
int main() {
	int succeed = 0;
	int count[4] = {};
	int carlist[5];
	int x;
	dreamCar car[4];
	strcpy_s(car[0].name, "Toyota");
	strcpy_s(car[1].name, "Honda");
	strcpy_s(car[2].name, "Masda");
	strcpy_s(car[3].name, "Nissan");
	car[0].price = 7000000;
	car[0].speed = 200;
	car[1].price = 8000000;
	car[1].speed = 210;
	car[2].price = 9000000;
	car[2].speed = 220;
	car[3].price = 10000000;
	car[3].speed = 230;
	do {
		printf("[1] [2] [3] [4] [5] ====>Check buy out [9]\n");
		printf("Enter number : ");
		scanf_s("%d", &x);
		if (x >= 5 && x <= 8 || x >= 10) {
			printf("-----------------You can\'t buy----------------\n\n");
			continue;
		}
		switch (x) {
		case 1:
			printf("[1] %s %d Baht  %d km/hr \n", car[0].name, car[0].price, car[0].speed);
			count[0]++;
			break;
		case 2:
			printf("[2] %s %d Baht %d km/hr\n", car[1].name, car[1].price, car[1].speed);
			count[1]++;
			break;
		case 3:
			printf("[3] %s %d Baht %d km/hr\n", car[2].name, car[2].price, car[2].speed);
			count[2]++;
			break;
		case 4:
			printf("[4] %s %d Baht %d km/hr\n", car[3].name, car[3].price, car[3].speed);
			count[3]++;
			break;
		case 9:
			for (int i = 0; i < 4; i++) {
				printf("[Toyota]=%d:::[Honda]=%d:::[Masda]=%d:::[Nissan]=%d\n", count[0], count[1], count[2], count[3], count[4]);
				int Max = max(max(count[0], count[1]), max(count[2], count[3]));
				int Min = min(min(count[0], count[1]), min(count[2], count[3]));
				printf(" Max = %d\n Min =%d\n", Max, Min);
				break;
			}
			if (x == 9) {
				printf("Check succeed\n");
				succeed++;
				if (succeed == 10) {
					printf("You check 10 times\n");
				}
			}
		}
		printf("\n\n");

	} while (x != 0);
	return 0;
}
int max(int a, int b) {
	int max;
	return max= a > b ? a : b;
}
int min(int c, int d) {
	int min;
	return min = c < d ? c : d;
}