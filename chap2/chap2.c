#include <stdio.h>

int len(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

int atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	} else {
		return c;
	}
}

int main() {
	char *s, *t;
	int i, n;

	s = "123";
	printf("atoi(%s) = %d\n", s, atoi(s));

	t = "AaBbCcZz123";
	n = len(t);
	printf("\"%s\", len: %d, lower:\n", t, n);
	for (i = 0; i < n; ++i) {
		printf("%c\t%c\n", t[i], lower(t[i]));
	}
	return 0;
}
