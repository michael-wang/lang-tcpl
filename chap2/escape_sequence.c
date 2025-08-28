// Show numeric value of escape sequences (p. 38 of the book).
#include <stdio.h>

enum escapes {
	ALERT_CHAR	= '\a',
	BACKSPACE	= '\b',
	FORMFEED	= '\f',
	NEWLINE		= '\n',
	RETURN		= '\r',
	TAB			= '\t',
	VTAB		= '\v',
	BACKSLASH	= '\\',
	QUESTION	= '\?',
	S_QUOTE		= '\'',
	D_QUOTE		= '\"',
	OCT_NUMBER	= '\000',
	HEX_NUMBER	= '\x00'
};

int main() {
	printf("char\thex\tdescription\n");
	printf("\\a\t%02X\talert (bell) character\n", ALERT_CHAR);
	printf("\\b\t%02X\tbackspace\n", BACKSPACE);
	printf("\\f\t%02X\tformfeed\n", FORMFEED);
	printf("\\n\t%02X\tnewline\n", NEWLINE);
	printf("\\r\t%02X\tcarriage return\n", RETURN);
	printf("\\t\t%02X\thorizontal tab\n", TAB);
	printf("\\v\t%02X\tvertical tab\n", VTAB);
	printf("\\\\\t%02X\tbackslash\n", BACKSLASH);
	printf("\\?\t%02X\tquestion mark\n", QUESTION);
	printf("\\\'\t%02X\tsingle quote\n", S_QUOTE);
	printf("\\\"\t%02X\tdouble quote\n", D_QUOTE);
	printf("\\00\t%02X\toctal number\n", OCT_NUMBER);
	printf("\\x00\t%02X\thexadecimal numher\n", HEX_NUMBER);
	return 0;
}
