/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <stdio.h>

int main() {
    int size,n;

    // Taking the size of the array as input from the user.
    // ইউজারের কাছ থেকে অ্যারের সাইজ ইনপুট নেওয়া।
    printf("Enter size of array: ");
    scanf("%d", &size);

    int a[size]; // Declaring an array of size 'size'.
              // 'size' আকারের একটি অ্যারে ডিক্লেয়ার করা।


// Taking the number of elements of the array as input from the user.

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);


    // Taking the elements of the array as input.
    // অ্যারের উপাদানগুলো ইনপুট নেওয়া।
    printf("Enter The Elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int key, idx = -1; // Declaring variables:
                       // - `key`: The number to search for.
                       // - `idx`: To store the index if the number is found (-1 indicates not found initially).
    // - `key`: যে সংখ্যা খোঁজা হবে।
    // - `idx`: সংখ্যা খুঁজে পেলে তার ইনডেক্স সংরক্ষণ করবে।

    // Prompting the user to enter the number to search for.
    // ইউজারকে যে সংখ্যা খুঁজতে চায় তা ইনপুট করতে বলা হচ্ছে।
    printf("Enter the number you want to search: ");
    scanf("%d", &key);

    // Iterating through the array to find the number.
    // সংখ্যাটি খুঁজতে অ্যারের মাধ্যমে লুপ চালানো।
    for (int i = 0; i < n; i++) {
        if (key == a[i]) { // If the current element matches the key.
                           // যদি বর্তমান উপাদান খোঁজার মানের সমান হয়।
            idx = i;       // Store the index of the found element.
                           // খুঁজে পাওয়া উপাদানের ইনডেক্স সংরক্ষণ করা।
            break;         // Exit the loop after finding the number.
                           // সংখ্যা খুঁজে পাওয়ার পর লুপ থেকে বের হওয়া।
        }
    }

    // Checking if the number was found or not.
    // চেক করা হচ্ছে সংখ্যা খুঁজে পাওয়া গেছে কিনা।
    if (idx != -1) {
        // If found, print the index.
        // যদি খুঁজে পাওয়া যায়, ইনডেক্স প্রিন্ট করা।
        printf("The Number was found at index: %d\n", idx);
    } else {
        // If not found, print "Nothing found".
        // যদি খুঁজে না পাওয়া যায়, "Nothing found" দেখানো।
        printf("Nothing found\n");
    }

    return 0;
}
