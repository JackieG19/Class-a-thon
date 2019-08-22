#include<stdio.h>

int main()
{
    int x = 10; // hardcoding - bad
    int y = x / 2;

    // "format string", inside is a format or covertion characters
    // need to convert y into a form that the console allows
    // %i - for integer
    
    printf("THe magic number is: %i\n", y); // passing 2 argument seperated by the comma
    // passing in a string, give more information and then give the number
    
    return 0;
}
