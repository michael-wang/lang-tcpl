#define array
// #define exe_1_13
// #define exe_1_14

#include <stdio.h>


#ifdef array

int main() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	printf("digits =");
	for (i = 0; i <10; ++i) {
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);

	return 0;
}

#elifdef exe_1_13

#define IN	1
#define OUT	0
#define MAX_LEN	20

int main() {
	int c, i, len, state;
	int len_count[MAX_LEN + 1];

	len = 0;
	state = OUT;
	for (i = 0; i <= MAX_LEN; ++i) {
		len_count[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (len > MAX_LEN) {
				len = MAX_LEN;
			}
			++len_count[len];
		} else if (state == OUT) {
			state = IN;
			len = 1;
		} else {
			++len;
		}
	}

	printf("Length\tCount\n");
	for (i = 1; i <= MAX_LEN; ++i) {
		printf("#%d\t%d\n", i, len_count[i]);
	}
	return 0;
}

#elifdef exe_1_14

#define CHAR_COUNT	256

int main() {
	int c, i;
	int count[CHAR_COUNT + 1];

	for (i = 0; i <= CHAR_COUNT; ++i) {
		count[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++count[c];
	}

	printf("CHAR\tCount\n");
	for (i = 0; i < CHAR_COUNT; ++i) {
		printf("%d\t%d\n", i, count[i]);
	}
	return 0;
}

#endif
