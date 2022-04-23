#include <stdio.h>

int main()
{
    FILE *ptr = 0;
    ptr = fopen("sample.txt", "r"); // --> for reading the files
                                    // ptr = fopen("sample2.txt","w"); // --> for writing the files
                                    // AGAR WRITE KAI MODE MAI KARTAI TO FILE GENRATE HO JYIGA

    return 0;
}