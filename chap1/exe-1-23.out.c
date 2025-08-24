

#include <stdio.h>


int main(void) {
    printf("Hello /* not comment */ world // not comment\n"); 
    char slash = '/'; 
    char star  = '*'; 
    int a = '/*'; 
    int b = '//';
    char quote = '\''; 
    char backslash = '\\';
    char *s = "A string with \\\"quotes\\\" and /* fake */ // stuff";
    
    printf("%c %c %d %d %c %c %s\n", slash, star, a, b, quote, backslash, s);
    
    printf("Line after comment\n");
      
    return 0;
}
