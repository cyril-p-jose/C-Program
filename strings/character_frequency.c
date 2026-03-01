#include <stdio.h>
int main() {
    int n, i;

    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    int freq[26] = {0};   // For a-z

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    printf("Character Frequencies:\n");

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0)
            printf("%c = %d\n", i + 'a', freq[i]);
    }

    return 0;
}
