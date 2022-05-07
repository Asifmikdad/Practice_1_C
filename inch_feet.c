/*write a program in c to take your height in inch then print it to feet and inch.. */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int height, feet, inch;
    printf("Enter height in inches: ");
    scanf("%d", &height);
    feet = height/12;
    inch = height%12;
    printf("Your height is %d feet %d inch", feet, inch);
    return 0;
}
