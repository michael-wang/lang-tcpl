#include <stdio.h>

// #define exe_1_3
// #define exe_1_4



#ifdef exe_1_3
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahr\tCelsius\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}

#elifdef exe_1_4

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	celsius = lower;
	printf("Celsius    Fahr\n");
	while (celsius <= upper) {
		fahr = (celsius + 32.0) * (9.0 / 5.0);
		printf("%3.0f\t%6.0f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}

#else

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
#endif
