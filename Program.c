// Any year is input through the keyboard. 
// Write a program to determine whether the year is a leap year or not.


#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("\n Enter Any Year : ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap year \n");
        else 
            printf("Not Leap Year \n");
    }
    else
        if (year % 4 == 0)
            printf("Leap year \n");
        else 
            printf("Not Leap Year \n");
    return 0;
}
