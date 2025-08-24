// Remove comments from C program including block comment (/* ... */) and single line (//...).
// Notice double quoted string and single quoted character constants:
// "/* not comment */"
// "// also not comment "
// '//' escape char, not start of single line comment.
// '/*' escape char, not start of block comment.
#include <stdio.h>

#define DOUBLE_QUOTE	'"'
#define SINGLE_QUOTE	'\''

#define NONE	0
#define BLOCK_COMMENT	1
#define LINE_COMMENT	2
#define STRING			3
#define CHAR			4

int main() {
	int c, state;

	state = NONE;
	while ((c = getchar()) != EOF) {
		// printf("\nstate: %d c: %02X\t", state, c);
		if (state == BLOCK_COMMENT) {
			// printf("state == BLOCK_COMMENT");
			// Search for block end
			if (c == '*') {
				if ((c = getchar()) == '/') {
					state = NONE;
				}
			}
			continue;
		} else if (state == LINE_COMMENT) {
			// printf("state == LINE_COMMENT");
			if (c == '\n') {
				state = NONE;
				putchar(c);
			}
			continue;
		} else if (state == STRING) {
			// printf("state == STRING");
			if (c == '\\') {
				putchar(c);
				c = getchar();
				putchar(c);
				continue;
			} else if (c == DOUBLE_QUOTE) {
				state = NONE;
			}
			putchar(c);
			continue;
		} else if (state == CHAR) {
			// printf("state == CHAR");
			if (c == '\\') {
				putchar(c);
				c = getchar();
				putchar(c);
				continue;
			} else if (c == SINGLE_QUOTE) {
				state = NONE;
			}
			putchar(c);
			continue;
		}


		if (c == '/') {
			c = getchar();
			// printf("c: %02X", c);
			if (c == '*') {
				state = BLOCK_COMMENT;
			} else if (c == '/') {
				state = LINE_COMMENT;
			} else {
				putchar('/');
				putchar(c);
			}
		} else if (c == DOUBLE_QUOTE) {
			// printf("c == DOUBLE_QUOTE");
			state = STRING;
			putchar(c);
		} else if (c == SINGLE_QUOTE) {
			// printf("c == SINGLE_QUOTE");
			state = CHAR;
			putchar(c);
		} else {
			// printf("c == other");
			putchar(c);
		}
	}
	return 0;
}
