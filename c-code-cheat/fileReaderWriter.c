#include <stdio.h>

int main()
{
    // open a file
    //  FILE *pF = fopen("test.txt", "w"); // a - append, //w - rewrite
    //  fprintf(pF, "Hello My name is mahir minhajddd ");

    // fclose(pF);//close

    // read a file
    FILE *pF1 = fopen("test.text", "r");
    // FILE *pF = fopen("C:\\Users\\Desktop\\read.me");
    char buffer[255];

    while (fgets(buffer, 255, pF1) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pF1);
    return 0;
}
