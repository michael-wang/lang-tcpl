#include <stdio.h>
#include "chap2.h"

void test_atoi() {
	char s[] = "12345";
	printf("atoi(\"%s\") = %d\n", s, atoi(s));
}

void test_lower() {
	int i, n;
	char t[] = "AaBbCcZz123";
	n = str_len(t);

	printf("\"%s\", len: %d, lower:\n", t, n);
	for (i = 0; i < n; ++i) {
		printf("%c\t%c\n", t[i], lower(t[i]));
	}
}

void test_random() {
	int i;

	printf("10 random int in [0, 32767]:\n");
	for (i = 0; i < 10; ++i) {
		printf("rand: %d\n", rand());
	}
}

void test_squeeze() {
	char s[] = "aaabcddde";
	char c = 'a';

	printf("squeeze(\"%s\", \'%c\') = ", s, c);
	squeeze(s, c);
	printf("%s\n", s);

	c = 'd';
	printf("squeeze(\"%s\", \'%c\') = ", s, c);
	squeeze(s, c);
	printf("%s\n", s);
}

int main() {
	test_atoi();
	test_lower();
	test_random();
	test_squeeze();

	return 0;
}
