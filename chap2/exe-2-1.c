#include <stdio.h>

#define MAXLINE	20

char line[MAXLINE];

int getline(void);

int main() {
	int len;

	while ((len = getline()) > 0) {
		printf("%s\n", line);
	}
	return 0;
}

int getline() {
	int i, c;

	// for (i = 0; i < MAXLINE-1 && (c = getchar()) != '\n' && c != EOF; ++i) {
	// 	line[i] = c;
	// }
	for (i = 0; i < MAXLINE-1; ++i) {
		c = getchar();
		if (c == '\n') {
			break;
		} else if (c == EOF) {
			break;
		} else {
			line[i] = c;
		}
	}
	line[i] = '\0';
	return i;
}
