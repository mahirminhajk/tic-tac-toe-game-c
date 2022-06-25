#include <stdio.h>
#include <string.h>

int main()
{
    char x[] = "water";
    char y[] = "lemonade";
    char temp[15];

    strcpy(temp, x); // strcpy used for give value one to other
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s\n", x);
    printf("%s", y);
}
