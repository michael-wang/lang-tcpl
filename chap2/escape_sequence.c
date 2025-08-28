// Show numeric value of escape sequences (p. 38 of the book).

#include <stdio.h>


#define BELL		'\a'
#define BACKSPACE	'\b'
#define FORMFEED	'\f'
#define NEWLINE		'\n'
#define CARRIAGE_RETURN	'\r'
#define HORZ_TAB	'\t'
#define VERT_TAB	'\v'
#define BACKSLASH	'\\'
#define QUESTION_MARK	'\?'
#define SINGLE_QUOTE	'\''
#define DOUBLE_QUOTE	'\"'
#define OCT_NUMBER	'\000'
#define HEX_NUMBER	'\x00'

int main() {
	printf("char\thex\tdescription\n");
	printf("\\a\t%02X\talert (bell) character\n", BELL);
	printf("\\b\t%02X\tbackspace\n", BACKSPACE);
	printf("\\f\t%02X\tformfeed\n", FORMFEED);
	printf("\\n\t%02X\tnewline\n", NEWLINE);
	printf("\\r\t%02X\tcarriage return\n", CARRIAGE_RETURN);
	printf("\\t\t%02X\thorizontal tab\n", HORZ_TAB);
	printf("\\v\t%02X\tvertical tab\n", VERT_TAB);
	printf("\\\\\t%02X\tbackslash\n", BACKSLASH);
	printf("\\?\t%02X\tquestion mark\n", QUESTION_MARK);
	printf("\\\'\t%02X\tsingle quote\n", SINGLE_QUOTE);
	printf("\\\"\t%02X\tdouble quote\n", DOUBLE_QUOTE);
	printf("\\00\t%02X\toctal number\n", OCT_NUMBER);
	printf("\\x00\t%02X\thexadecimal numher\n", HEX_NUMBER);
	return 0;
}
