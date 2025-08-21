#include <stdio.h>

#define TABSPAN	4

#define ENTAB	1
#define NOT		0


int main() {
	int c, i, state, count;

	state = NOT;
	count = 0;

	while ((c = getchar()) != EOF) {
		if (state == ENTAB) {
			if (count == TABSPAN) {
				if (TABSPAN > 1) {
					putchar('\t');
				} else {
					putchar(' ');
				}
				count = 0;
			}
		}

		if (c == ' ') {
			state = ENTAB;
			++count;
		} else {
			if (state == ENTAB) {
				for (i = 0; i < count; ++i) {
					putchar(' ');
				}
				state = NOT;
				count = 0;
			}
			putchar(c);
		}
	}
	return 0;
}
