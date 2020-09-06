#include<stdio.h>
int rectangle(int a, int  b) {
	return a * b;
}
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a == 1 || b == 1) {
		printf("You cann\'t draw");
	}
	else {
		int area = rectangle(a, b);
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				printf("* ");
			}
			printf("\n");
		}
		printf("Area of rectangle  = %d", area);
		return 0;
	}
}