#include <stdio.h>
int main()
{
    // print the first 10 natural numbers in reverse order

    int num = 10;
    printf("First 10 natural numbers in reverse order are : ");

    while(num >= 1)
    {
        
        printf("\n%d", num);
        num--;
    }


    return 0;
}