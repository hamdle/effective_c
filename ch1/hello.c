// preprocessor directives
#include <stdio.h> // declares puts()
#include <stdlib.h> // declares EXIT_SUCCESS macro
int main(void) {    // { goes here for stylistic reason: it's more compact
    puts("Hello, world!");  // C Standard Library function writes string to stdout
    return EXIT_SUCCESS;    // #define EXIT_SUCCESS 0
}
