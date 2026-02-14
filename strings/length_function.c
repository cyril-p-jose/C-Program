#include <stdio.h>
#include <string.h>   // For strlen()

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Allows spaces

    length = strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
