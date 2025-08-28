// Show numeric value of escape sequences (p. 38 of the book).
#include <stdio.h>

// enum escapes {
// 	ALERT_CHAR	= '\a',
// 	BACKSPACE	= '\b',
// 	FORMFEED	= '\f',
// 	NEWLINE		= '\n',
// 	RETURN		= '\r',
// 	TAB			= '\t',
// 	VTAB		= '\v',
// 	BACKSLASH	= '\\',
// 	QUESTION	= '\?',
// 	S_QUOTE		= '\'',
// 	D_QUOTE		= '\"',
// 	OCT_NUMBER	= '\000',
// 	HEX_NUMBER	= '\x00'
// };
const char *titles[] = {
	"\\a",
	"\\b",
	"\\f",
	"\\n",
	"\\r",
	"\\t",
	"\\v",
	"\\\\",
	"\\?",
	"\\\'",
	"\\\"",
	"\\000",
	"\\x00"
};

const char escapes[] = {
	'\a',
	'\b',
	'\f',
	'\n',
	'\r',
	'\t',
	'\v',
	'\\',
	'\?',
	'\'',
	'\"',
	'\000',
	'\x00'
};

const char *descriptions[] = {
	"alert (bell) character",
	"backspace",
	"formfeed",
	"newline",
	"carriage return",
	"horizontal tab",
	"vertical tab",
	"backslash",
	"question mark",
	"single quote",
	"double quote",
	"octal number",
	"hexadecimal numher",
};

int main() {
	int i;

	for (i = 0; i < 13; ++i) {
		printf("%s\t%02X\t%s\n", titles[i], escapes[i], descriptions[i]);
	}
	return 0;
}
