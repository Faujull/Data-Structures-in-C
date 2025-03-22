/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <stdio.h>

// Main function to implement insertion sort.
// মেইন ফাংশন যেখানে ইনসারশন সর্ট করা হয়েছে।
int main()
{
    int n; // Variable to store the size of the array.
           // অ্যারের সাইজ সংরক্ষণ করার জন্য ভ্যারিয়েবল।

    // Prompt the user to enter the size of the array.
    // ইউজারকে অ্যারের সাইজ ইনপুট করতে বলা হচ্ছে।
    printf("Enter the size of the array: ");
    scanf("%d", &n); // Take the input for the size of the array.
    // অ্যারের সাইজ ইনপুট নেওয়া।

    double a[n]; // Declaring an array of size 'n' to store double values.
                 // 'n' সাইজের একটি ডাবল টাইপ অ্যারে ডিক্লেয়ার করা।

    // Taking input for the elements of the array.
    // অ্যারের উপাদান ইনপুট নেওয়া।
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]); // Input each element as a double.
        // প্রতিটি উপাদান ইনপুট করা হচ্ছে।
    }

    // Implementing insertion sort.
    // ইনসারশন সর্ট ব্যবহার করে অ্যারে সাজানো।
    for (int i = 1; i < n; i++) {
        double key = a[i]; // Store the current element to insert in the sorted portion.
                           // বর্তমান উপাদানটি সংরক্ষণ করা যা সাজানো অংশে ঢোকানো হবে।
        int j = i - 1;     // Start comparing from the element just before the current one.
                           // বর্তমান উপাদানের আগে থেকে তুলনা শুরু।

        // Shift elements of the sorted portion to the right if they are greater than 'key'.
        // যদি উপাদানটি 'key'-এর চেয়ে বড় হয়, তবে তা ডানদিকে সরানো।
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; // Move the larger element one position to the right.
                             // বড় উপাদানকে এক ধাপ ডানে সরানো।
            j--;             // Move one position to the left for further comparison.
                             // আরও তুলনার জন্য এক ধাপ বামে যাওয়া।
        }
        a[j + 1] = key; // Place the 'key' in its correct position in the sorted portion.
                        // 'key'-কে তার সঠিক স্থানে রাখুন।
    }

    // Printing the sorted array with 3 decimal places.
    // সাজানো অ্যারে তিন দশমিক ঘরের নির্ভুলতায় প্রিন্ট করা।
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3lf ", a[i]); // Print each element with 3 decimal precision.
        // প্রতিটি উপাদান তিন দশমিক ঘরের নির্ভুলতায় প্রিন্ট করা।
    }
    printf("\n"); // Newline for better formatting.

    return 0; // Program ends successfully.
    // প্রোগ্রাম সফলভাবে শেষ।
}
