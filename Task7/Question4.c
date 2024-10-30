#include <stdio.h>
int main()
{
    char str[100];
    char *start, *end,temp;
    int length=0;
    printf("Enter String:\n");
    scanf("%s", str);
    start = str;
    while (*start != '\0')
    {
        start++;
        length++;
    }
    printf("Length is %d\n", length);

    start = str;
    end = str + length-1;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reverse string is: %s\n ", str);

    return 0;
}
