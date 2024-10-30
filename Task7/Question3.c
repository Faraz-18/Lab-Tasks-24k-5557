#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int countA = 0,countE = 0,countI = 0,countO = 0,countU = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            countA++;
        }
        if (str[i] == 'e' || str[i] == 'E')
        {
            countE++;
        }
        if (str[i] == 'i' || str[i] == 'I')
        {
            countI++;
        }
        if (str[i] == 'o' || str[i] == 'O')
        {
            countO++;
        }
        if (str[i] == 'u' || str[i] == 'U')
        {
            countU++;
        }
    }
    printf("A= %d\n", countA);
    printf("E= %d\n", countE);
    printf("I= %d\n", countI);
    printf("O= %d\n", countO);
    printf("U= %d\n", countU);
    return 0;
}
