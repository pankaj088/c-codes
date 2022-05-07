#include <stdio.h>

void reverse(int arr[], int s) // int s yaha array ka size hai
{
    for (int i = 0; i < s / 2; i++) //(i<s/2)  size kai number  ko  2 sai divide  karkai reverse kar dega
    {
        int a = arr[i];          // i yaha number ka size hai
        arr[i] = arr[s - i - 1]; // [s-i-1] yai reverse ka formula hai: s yani jitna  number ka size hai or i yani jiskai sath karna hai
        arr[s - 1 - i] = a;
    }
}

int main()
{
    int arr[6] = {5, 4, 7, 1, 2, 3};
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
} 