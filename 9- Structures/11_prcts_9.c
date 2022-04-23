#include <stdio.h>

typedef struct date{
    int date;
    int months;
    int year;
}date;

void display(date d){
   printf(" the date is: %d/%d/%d\n", d.date, d.months, d.year); 
}

int datecmp(date d1, date d2){

    // year kai basics pai comprision kar rahi hai
    if(d1.year> d2.year){        
        return 1;
    }
    if(d1.year< d2.year){
        return -1;         // -1 kue kuki d1.year yani pahlai bali year agar d2 sai choti hai islye -1 return kariga
    }

    // months kai basics pai comprison kar rahai hai
    if(d1.months> d2.months){
        return 1;
    }
    if(d1.months< d2.months){
        return -1;
    }

    // date kai bacis pai comprison kar rahai ahi
    if(d1.date> d2.date){
        return 1;
    }
    if(d1.date< d2.date){
        return -1;
    }

}


int main()
{
    date d1 = { 23, 04 ,22};  // (date, month, year)
    date d2 = { 23, 03, 22};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printf("date comprision function returns: %d", a);

    return 0;
}