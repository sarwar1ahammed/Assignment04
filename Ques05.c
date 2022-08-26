#include <stdio.h>
int main()
{
    // print the first 10 odd natural numbers in reverse order.

    int num = 19;
    printf("First 10 odd natural numbers in reverse order are : ");

    while(num >= 1)
    {
        
        printf("\n%d", num);
        num-=2;
    }



    return 0;
}