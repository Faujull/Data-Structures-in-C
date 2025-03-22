/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <stdio.h> // Standard input-output library for using printf and scanf.

int main() {
    int size,n;

    // Prompt the user to enter the size of the array.

    printf("Enter the size of the array: ");
    scanf("%d", &size); // Taking input for the size of the array.


    int a[size]; // Declaring an array of size 'n' to store int values.

// Prompt the user to enter the elements of the array.

    printf("Enter the number of elements of the array: ");
    scanf("%d",&n); // Taking input for the size of the array.


    // Taking array elements as input.

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) { // Loop to iterate through the array.
        scanf("%d", &a[i]); // Input each element as a int.
        // প্রতিটি উপাদান ইনপুট করা হচ্ছে।
    }

    // Sorting the array in ascending order using nested loops.

    for (int i = 0; i < n-1; i++) { // Outer loop to pass calculate
        for (int j = 0; j < n-1-i; j++) { // Inner loop to compare with subsequent elements.
            if (a[j] > a[j+1]) { // Compare the current element with the next elements.
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }

    // Printing the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) { // Loop through the sorted array.
        printf("%d ", a[i]); // Print each element

    }
    printf("\n"); // Newline for better output formatting.

    return 0; // End of the program.

}
