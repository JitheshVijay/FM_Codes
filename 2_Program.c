#include <stdio.h>

int main() {
    char c;
    int i;
    double d;
    char str[100];

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered: %c %d %lf %s\n", c, i, d, str);
    return 0;
}
