/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <stdio.h>

// মেইন ফাংশন যেখানে সিলেকশন সর্ট ব্যবহার করা হয়েছে।
// Main function implementing Selection Sort.
int main()
{
    int n; // Variable to store the size of the array.
           // অ্যারের সাইজ সংরক্ষণ করার জন্য ভ্যারিয়েবল।

    // Prompt the user to input the size of the array.
    // ইউজারকে অ্যারের সাইজ ইনপুট করতে বলা হচ্ছে।
    printf("Enter the size of the array: ");
    scanf("%d", &n); // Take the size as input.
    // অ্যারের সাইজ ইনপুট নেওয়া।

    double a[n]; // Declaring an array of size 'n' to store double values.
                 // 'n' সাইজের একটি ডাবল টাইপ অ্যারে ডিক্লেয়ার করা।

    // Taking input for the elements of the array.
    // অ্যারের উপাদান ইনপুট নেওয়া।
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]); // Input each element as a double.
        // প্রতিটি উপাদান ইনপুট নেওয়া হচ্ছে।
    }

    // Implementing Selection Sort.
    // সিলেকশন সর্ট ব্যবহার করে অ্যারে সাজানো।
    for (int i = 0; i < n - 1; i++) {
        int id = i; // Assume the current index 'i' has the minimum value.
                    // ধরা হচ্ছে বর্তমান ইনডেক্স 'i' তে সর্বনিম্ন মান আছে।

        // Traverse the unsorted portion of the array to find the actual minimum.
        // অ্যারের অসম্পূর্ণ অংশে ঘুরে প্রকৃত সর্বনিম্ন মান খোঁজা।
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[id]) { // If a smaller element is found, update 'id'.
                                // যদি ছোট উপাদান পাওয়া যায়, তাহলে 'id' আপডেট।
                id = j;         // Update 'id' to store the index of the minimum value.
                                // 'id' তে সর্বনিম্ন মানের ইনডেক্স সংরক্ষণ।
            }
        }

        // If the minimum value is not at the current index, swap it.
        // যদি সর্বনিম্ন মান বর্তমান ইনডেক্সে না থাকে, তাহলে অদল-বদল।
        if (id != i) {
            double temp = a[i]; // Store the value at index 'i' in a temporary variable.
                                // ইনডেক্স 'i' এর মান একটি টেম্পোরারি ভ্যারিয়েবলে সংরক্ষণ।
            a[i] = a[id];       // Move the minimum value to index 'i'.
                                // সর্বনিম্ন মানটি ইনডেক্স 'i' তে স্থানান্তর।
            a[id] = temp;       // Place the original value at 'id'.
                                // মূল মানটি 'id' তে স্থানান্তর।
        }
    }

    // Printing the sorted array.
    // সাজানো অ্যারে প্রিন্ট করা।
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3lf ", a[i]); // Print each element with 3 decimal precision.
        // প্রতিটি উপাদান তিন দশমিক ঘরের নির্ভুলতায় প্রিন্ট করা।
    }
    printf("\n"); // Newline for better formatting.

    return 0; // Program ends successfully.
    // প্রোগ্রাম সফলভাবে শেষ।
}
