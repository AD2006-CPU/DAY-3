#include <stdio.h>
#include <math.h>
int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Floor value: %f\n", floor(num));
    printf("Ceiling value: %f\n", ceil(num));
    return 0;
}


