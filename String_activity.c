#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char string[50];
    int size, vowels = 0, conso = 0;
    printf("Enter any String: ");
    fgets(string, sizeof(string), stdin);
    size = strlen(string);
    for (int i = 0; i < size; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            string[i] = toupper(string[i]);
        }
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            vowels++;
        }

        else if (isalpha(string[i]))
        {
            conso++;
        }
    }
    printf("\nReversed: ");
    for (int i = 0; size >= i; size--)
    {
        if (string[size] == '\n')
        {
            printf("");
        }
        else
        {
            printf("%c", string[size]);
        }
    }
    printf("\n==============");
    size = strlen(string);
    printf("\nString Legth: %d", size);
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d\n", conso);
    return 0;
}
