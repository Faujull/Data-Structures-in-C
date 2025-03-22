/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <stdio.h>

int main()
{
    int size, n, position, i, value;

    printf("Enter the size in the array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);

    printf("Please enter the value\n");
    scanf("%d", &value);

    for (i = n - 1; i >= position - 1; i--)
        arr[i+1] = arr[i];

    arr[position-1] = value;

    printf("Resultant array is\n");

    for (i = 0; i <= n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
