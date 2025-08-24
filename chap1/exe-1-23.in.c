/* header block comment */
/* multi
   line */
#include <stdio.h>

// line comment after include
int main(void) {
    printf("Hello /* not comment */ world // not comment\n"); /* trailing comment */
    char slash = '/'; // slash char
    char star  = '*'; /* block comment after code */
    int a = '/*'; // multi-character char constant (implementation-defined)
    int b = '//';
    char quote = '\''; // escaped single quote
    char backslash = '\\';
    char *s = "A string with \\\"quotes\\\" and /* fake */ // stuff";
    /* comment with // inside */
    printf("%c %c %d %d %c %c %s\n", slash, star, a, b, quote, backslash, s);
    // A tricky line: /* block start in comment should be removed entirely
    printf("Line after comment\n");
    /* open */ /* close */ /* nested-looking /* not nested */
    return 0;
}
