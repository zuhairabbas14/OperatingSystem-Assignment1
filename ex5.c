#include <stdio.h>

int main() {
    
    int n = 99;
    char **s = (char **) malloc(n * sizeof(char *));
    s[0] = (char *) malloc(n * sizeof(char));
    char foo[] = "Hello World";
    s[0] = foo;
    printf("s[0] is %s\n",s[0]);
    return(0);

} 
