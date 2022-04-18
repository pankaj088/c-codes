#include <stdio.h>

int main()
{
    int n_student =3;
    int n_subjects =5;
    
    int marks[3][5]; // yaha 3 student hai or  subjects 5 hai
    for(int i=0;i<n_student;i++){ // yaha i student hai
        for(int j=0;j<n_subjects;j++){ // yaha  j subjects hai
        printf("enter the marks of student %d in subject%d\n",i+1,j+1);
        scanf("%d", &marks[i][j]);

        }
    }
    for(int i=0;i<n_student;i++){
        for(int j=0;j<n_subjects;j++){
            printf("the  marks of student %d in subject %d\n ",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}