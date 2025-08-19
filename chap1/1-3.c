#include <stdio.h>

// #define exe_1_5


#ifdef exe_1_5

int main() {
	int fahr;

	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}

#else

int main() {
	int fahr;

	for (fahr = 0; fahr <= 300; fahr += 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}
#endif
