#include <stdio.h>
int main() 
{
    int n,lastdigit;
    printf("Enter a number: ");
    scanf("%d", &n);
    lastdigit=n%10;
    printf("Last digit=%d",lastdigit);
    return 0;
}

