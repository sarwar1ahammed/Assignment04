#include <stdio.h>
int main()
{
    // print the first 10 odd natural numbers

    int num = 1;
    printf("First 10 odd natural numbers are : ");

    while(num < 20)
    {
        
        printf("\n%d", num);
        num+=2;
    }



    return 0;
}