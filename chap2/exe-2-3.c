#include <stdio.h>
#include "chap2.h"

int htoi(char s[]) {
	int i, c, n;

	n = 0;
	for (i = 0; (c = s[i]) != '\0'; ++i) {
		c = lower(c);
		if (c >= '0' && c <= '9') {
			n = 16 * n + (c - '0');
		} else if (c >= 'a' && c <= 'f') {
			n = 16 * n + (c - 'a' + 10);
		} else {
			return n;
		}
	}
	return n;
}

void test(char s[], int expected) {
	int i = htoi(s);
	printf("\"%s\" => htoi => %d\t", s, i);
	if (i == expected) {
		printf("PASS\n");
	} else {
		printf("FAILED\n");
	}
}

int main() {
	test("ff", 255);
	test("FF", 255);

	return 0;
}
