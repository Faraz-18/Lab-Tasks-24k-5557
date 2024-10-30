#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length, isPalindrome=1;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
        }
    }
    if (isPalindrome)
        printf("It is palindrome");
    else
        printf("Not paindrome");

    return 0;
}
