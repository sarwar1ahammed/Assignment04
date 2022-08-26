#include <stdio.h>
int main()
{
    // print the first 10 even natural numbers in reverse order

    int num = 20;
    printf("First 10 even natural numbers in reverse order are : ");

    while(num >= 2)
    {
        
        printf("\n%d", num);
        num-=2;
    }



    return 0;
}