#include <stdio.h>
int main()
{
    // print squares of the first 10 natural numbers.

    int num = 1;
    printf("Squares of First 10 natural numbers are : ");

    while(num <= 10)
    {
        
        printf("\n%d", num * num);
        num++;
    }



    return 0;
}