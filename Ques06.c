#include <stdio.h>
int main()
{
    // print the first 10 even natural numbers

    int num = 2;
    printf("First 10 even natural numbers are : ");

    while(num <= 20)
    {
        
        printf("\n%d", num);
        num+=2;
    }



    return 0;
}