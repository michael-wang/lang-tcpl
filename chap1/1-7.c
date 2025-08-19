#define power
// #define exe_1_15

#include <stdio.h>


#ifdef power

int power(int m, int n);

int main() {
	int i;

	for (i = 0; i < 10; ++i) {
		printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}

int power(int base, int n) {
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i) {
		p = p * base;
	}
	return p;
}

#elifdef exe_1_15

float to_celsius(float fahr);

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = to_celsius(fahr);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

float to_celsius(float fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}

#endif
