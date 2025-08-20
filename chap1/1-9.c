#define LONGEST_LINE
// #define EXE_1_16
// #define EXE_1_17
// #define EXE_1_18
// #define EXE_1_19


#ifdef LONGEST_LINE

#include <stdio.h>

#define MAXLINE	1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("Longest line: %s", longest);
	}
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

//#############################################################################
#elifdef EXE_1_16


#include <stdio.h>

#define MAXLINE	10

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("Max line: %s%s\n", longest, (max > MAXLINE) ? "..." : "");
		printf("Length: %d", max);
	}
	return 0;
}

// Return length of line, even if it's larger than lim.
int getline(char s[], int lim) {
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c!= '\n'; ++i) {
		if (i < lim - 1) {
			s[i] = c;
		}
	}

	if (i < lim - 1) {
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	} else {
		if (c == '\n') {
			++i;
		}
		s[lim - 1] = '\0';
	}
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

//#############################################################################
#elifdef EXE_1_17


#include <stdio.h>

#define MAXLINE	1000
#define THRESHOLD 80

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > THRESHOLD) {
			printf("%s", line);
		}
	}

	return 0;
}

// Return length of line, even if it's larger than lim.
int getline(char s[], int lim) {
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c!= '\n'; ++i) {
		if (i < lim - 1) {
			s[i] = c;
		}
	}

	if (i < lim - 1) {
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	} else {
		if (c == '\n') {
			++i;
		}
		s[lim - 1] = '\0';
	}
	return i;
}

//#############################################################################
#elifdef EXE_1_18

#include <stdio.h>
#define MAXLINE	1000

int getline(char line[], int maxline);
int trim_tail(char line[], int len);
void putline(char line[]);

int main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		len = trim_tail(line, len);
		if (len > 0) {
			putline(line);
		}
	}
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c!= '\n'; ++i) {
		if (i < lim - 1) {
			s[i] = c;
		}
	}

	if (i < lim - 1) {
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	} else {
		if (c == '\n') {
			++i;
		}
		s[lim - 1] = '\0';
	}
	return i;
}

int trim_tail(char line[], int len) {
	int i, c;

	// printf("line: %s, len: %d\n", line, len);
	for (i = len - 1; i >= 0; --i) {
		c = line[i];
		if (c == '\n') {
			continue;
		}
		// printf("i: %d, c: %d\n", i, c);
		if (c != ' ' && c != '\t') {
			// printf("return i: %d\n", i);
			line[i + 1] = '\n';
			line[i + 2] = '\0';
			return i + 2;
		}
	}
	// printf("return i: %d\n", i);
	return i;
}

void putline(char line[]) {
	int c, i;

	i = 0;
	while ((c = line[i]) != '\0') {
		putchar(c);
		++i;
	}
}

//#############################################################################
#elifdef EXE_1_19

#include <stdio.h>
#define MAXLINE		1000

int getline(char line[], int maxline);
void reverse(char line[], int len);
void copy(char to[], char from[]);

int main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s", line);
	}

	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c!= '\n'; ++i) {
		if (i < lim - 1) {
			s[i] = c;
		}
	}

	if (i < lim - 1) {
		if (c == '\n') {
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	} else {
		if (c == '\n') {
			++i;
		}
		s[lim - 1] = '\0';
	}
	return i;
}

void reverse(char line[], int len) {
	int c, i;
	char clone[MAXLINE];

	copy(clone, line);

	for (int i = len - 1; i >= 0; --i) {
		c = clone[i];
		line[len - i - 1] = c;
	}
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}



#endif
