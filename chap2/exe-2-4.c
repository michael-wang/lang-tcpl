#include <stdio.h>
#include <string.h>
#include "chap2.h"

/* squeeze_2: delete each char of s2 from s1*/
void squeeze_2(char s1[], char s2[]) {
	int i;

	for (i = 0; s2[i] != '\0'; i++) {
		printf("delete %c from %s => ", s2[i], s1);
		squeeze(s1, s2[i]);
		printf("%s\n", s1);
	}
}

void test(char s1[], char s2[], char expected_s1[]) {
	squeeze_2(s1, s2);
	printf("%s <== ", s1);
	if (strcmp(s1, expected_s1) == 0) {
		printf("PASS\n");
	} else {
		printf("FAILED\n");
	}
}

int main() {
	char s1[] = "aaabbcccdd12345";
	char s2[] = "9d5bx";
	char exp[] = "aaaccc1234";
	test(s1, s2, exp);
	return 0;
}
