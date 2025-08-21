#include <stdio.h>

#define N	21

char line[N];
char remain[N];

int getline(void);
int fold(int n);
void copy(int start);
void dump(char cc[]);

int main() {
	int n, i;
	extern char line[];
	extern char remain[];

	remain[0] = '\0';
	while ((n = getline()) > 0) {
		n = fold(n);
		printf("%s\n", line);
	}

	return 0;
}

int getline(void) {
	int c, i;
	extern char line[];

	// Copy remian to line
	for (i = 0; i < N-1 && (c = remain[i]) != '\0'; ++i) {
		line[i] = c;
		remain[i] = '\0';
	}

	for (; i < N-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	line[i] = '\0';
	// dump(line);
	// dump(remain);
	return i;
}

#define IN_BLANK	1

int fold(int n) {
	int i, c, state;
	extern char line[];
	extern char remain[];

	for (i = n - 1; i >= 0; --i) {
		c = line[i];
		if (c == ' ' || c == '\t') {
			state = IN_BLANK;
		} else if (state == IN_BLANK) {
			copy(i + 1);
			line[i + 1] = '\0';
			return i;
		}
	}
	remain[0] = '\0';
	return n;
}

void copy(int start) {
	extern char line[];
	extern char remain[];

	int i, c;

	for (i = start; i < N && (c = line[i]) != '\0'; ++i) {
		remain[i - start] = c;
	}
}

void dump(char cc[]) {
	int i;

	for (i = 0; i < N; ++i) {
		printf("%02d|", i);
	}
	printf("\n");

	for (i = 0; i < N; ++i) {
		printf("%02X ", cc[i]);
	}
	printf("\n");

	for (i = 0; i < N; ++i) {
		putchar(' ');
		putchar(cc[i]);
		putchar(' ');
	}
	putchar('\n');
}
