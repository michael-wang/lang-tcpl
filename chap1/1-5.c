#define copy
// #define exe_1_6
// #define exe_1_7
// #define count_char
// #define count_line
// #define exe_1_8
// #define exe_1_9
// #define exe_1_10
// #define counter
// #define exe_1_12


#include <stdio.h>

#ifdef copy

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	return 0;
}

#elifdef exe_1_6

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		printf("%d", c != EOF);
		putchar(c);
	}
	printf("%d", c != EOF);
	return 0;
}

#elifdef exe_1_7

int main() {
	printf("EOF: %d\n", EOF);
	return 0;
}

#elifdef count_char

int main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc) {
		;
	}
	printf("%.0f\n", nc);
	return 0;
}

#elifdef count_line

int main() {
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}
	printf("%d\n", nl);

	return 0;
}

#elifdef exe_1_8

int main() {
	int c, blank, tab, nl;

	blank = 0;
	tab = 0;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		} else if (c == ' ') {
			++blank;
		} else if (c == '\t') {
			++tab;
		}
	}
	printf("#Blank: %d\n", blank);
	printf("#Tab: %d\n", tab);
	printf("#New Line: %d\n", nl);

	return 0;
}

#elifdef exe_1_9

#define NOT			0
#define IN_SPACE	1

int main() {
	int c, in_spaces;

	c = 0; in_spaces = NOT;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (in_spaces == NOT) {
				in_spaces = IN_SPACE;
				putchar(c);
			}
		} else {
			if (in_spaces == IN_SPACE) {
				in_spaces = NOT;
			}
			putchar(c);
		}
	}
	return 0;
}

#elifdef exe_1_10

#define Tab			'\t'
#define BackSpace	'\b'
#define BackSlash	'\\'

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == Tab) {
			putchar('\\');
			putchar('t');
		} else if (c == BackSpace) {
			putchar('\\');
			putchar('b');
		} else if (c == BackSlash) {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}
	return 0;
}

#elifdef counter

#define IN	1
#define OUT	0

int main() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("#Lines: %d\n#Words: %d\n#Char: %d\n", nl, nw, nc);
	return 0;
}

#elifdef exe_1_12

#define IN	1
#define OUT	0

int main() {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN) {
			putchar(c);
		}
	}
	return 0;
}

#endif
