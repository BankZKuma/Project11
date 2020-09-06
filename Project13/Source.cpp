#include<stdio.h>
float usd(float);
float jpy(float);
float convert(float baht, float (*p)(float));
int main() {
	int count = 0;
	float collecTusd[10],collecTjpy[10];
	float baht;
	for (int i = 0; i < 5; i++) {
		printf("Enter baht : ");
		scanf_s("%f", &baht);
		collecTusd[i] = convert(baht, usd);
		collecTjpy[i] = convert(baht, jpy);
		if (count == 2 || count == 4) {
			printf("USD = %f\nYEN = %f\n", convert(baht, usd)*
				0.95, convert(baht, jpy)*0.90);
		}
		else {
			printf("USD = %f\nYEN = %f\n", convert(baht, usd), convert(baht, jpy));
		}
		count++;
	}
	return 0;
}
float usd(float baht) {
	float getdollar = baht / 35;
	return getdollar;
}
float jpy(float baht) {
	float yen = baht / 0.3;
	return yen;
}
float convert(float baht, float (*p)(float)) {
	float total = (*p)(baht);
	return total;
}
