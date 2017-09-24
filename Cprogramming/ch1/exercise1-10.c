#include <stdio.h>

/* program copies its input to its output replacing
 * each tab by \t and each \b by \\
 */
main() {
    double blank = 0, c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }

    }
}