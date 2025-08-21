#include <stdio.h>

#define TABSPAN		4

void detab(int n);

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			detab(TABSPAN);
		} else {
			putchar(c);
		}
	}
	return 0;
}

void detab(int n) {
	int i;

	for (i = 0; i < n; ++i) {
		putchar(' ');
	}
}
