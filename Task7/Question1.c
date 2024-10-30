#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    int temp;
    printf("Enter Numbers of elements: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
        
    }
    printf("\n");
    return 0;
}
