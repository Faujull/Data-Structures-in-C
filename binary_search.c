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

    // Taking input for the elements of the array.
    // ইউজার থেকে অ্যারের উপাদান ইনপুট নেওয়া।
    printf("Enter the sorted elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Prompting the user to enter the number to search for.
    // ইউজারকে যে সংখ্যা খুঁজতে চায় তা ইনপুট করতে বলা হচ্ছে।
    int key;
    printf("Enter the number you want to search: ");
    scanf("%d", &key);

    // Initializing the binary search variables.
    // বাইনারি সার্চের জন্য ভ্যারিয়েবল ডিক্লেয়ার এবং ইনিশিয়ালাইজ।
    int left = 0;           // Starting index of the array.
                            // অ্যারের শুরুর ইনডেক্স।
    int right = n - 1;      // Ending index of the array.
                            // অ্যারের শেষ ইনডেক্স।
    int result = -1;        // Variable to store the result. Default is -1 (not found).
                            // ফলাফল সংরক্ষণের জন্য ভ্যারিয়েবল। ডিফল্ট -১ (পাওয়া যায়নি)।

    // Loop for binary search.
    // বাইনারি সার্চ করার জন্য লুপ।
    while (left <= right) {
        // Calculating the middle index to divide the search space.
        // সার্চ স্পেস বিভক্ত করার জন্য মধ্যবর্তী ইনডেক্স বের করা।
        int mid = left + (right - left) / 2;

        // If the middle element matches the key.
        // যদি মধ্যবর্তী উপাদান ইউজারের খোঁজা মানের সমান হয়।
        if (a[mid] == key) {
            result = mid;   // Store the index of the found element.
                            // পাওয়া উপাদানের ইনডেক্স সংরক্ষণ করা।
            break;          // Exit the loop as the element is found.
                            // উপাদান খুঁজে পাওয়ার পর লুপ থেকে বের হওয়া।
        } else if (a[mid] < key) {
            // If the middle element is smaller than the key, search the right half.
            // যদি মধ্যবর্তী উপাদান ইউজারের মানের চেয়ে ছোট হয়, ডানদিকে খোঁজা।
            left = mid + 1; // Update 'left' to mid + 1.
                            // `left`-কে `mid + 1` এ সেট করা।
        } else {
            // If the middle element is larger than the key, search the left half.
            // যদি মধ্যবর্তী উপাদান ইউজারের মানের চেয়ে বড় হয়, বামদিকে খোঁজা।
            right = mid - 1; // Update 'right' to mid - 1.
                             // `right`-কে `mid - 1` এ সেট করা।
        }
    }

    // Checking if the result is found.
    // ফলাফল খুঁজে পাওয়া গেছে কিনা তা চেক করা।
    if (result != -1) {
        // If found, print the index.
        // যদি পাওয়া যায়, ইনডেক্স প্রিন্ট করা।
        printf("Element found at index %d\n", result);
    } else {
        // If not found, print an appropriate message.
        // যদি না পাওয়া যায়, উপযুক্ত বার্তা দেখানো।
        printf("Element not found\n");
    }

    return 0; // End the program successfully.
              // প্রোগ্রাম সফলভাবে শেষ।
}
