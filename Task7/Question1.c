#include <stdio.h>
int main()
{
    int arr[6];
    int temp;
    printf("Enter Numbers in array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;

    for (int i = 0; i < 6; i++)
    {

        printf("%d", arr[i]);
        
    }
    printf("\n");
    return 0;
}
