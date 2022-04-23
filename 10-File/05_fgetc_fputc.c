#include <stdio.h>

int main()
{
  FILE *ptr = 0;
  ptr = fopen("getcdemo.txt", "r");
  // char c = fgetc(ptr);   // fgetc ak function hai jo merai file ko chacter by charcter read karta hai  
  printf("the value of my charcter is %c\n", fgetc(ptr));
  printf("the value of my charcter is %c\n", fgetc(ptr));
  printf("the value of my charcter is %c\n", fgetc(ptr));
  printf("the value of my charcter is %c\n", fgetc(ptr)); 
  // ptr = fopen("putcdemo.txt","w");  // file ko write karnai kai liyai
  // ptrc('c',ptr);
  // fclose(ptr); 
  return 0;
}