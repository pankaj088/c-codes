// #include <stdio.h>
// void printArray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("the value of element %d is %d\n",i+1,*(ptr+i));
//     }
// }
 void printArray(int ptr[], int n){
     for(int i=0; i<n; i++){
         printf("the value of element is %d is%d\n",i+1,ptr[i]);

     }
        ptr[2] = 555;// (yaha ptr array hai): yai actual array ko change kar dega yai main function mai bhi value change kar dega
 }

int main()
{
    int arr[] ={2,3,4,5,6,7,8,9};
    printArray(arr,8);
    printf("%d", arr[2]);
    
    return 0;
}