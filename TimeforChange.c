#include <stdio.h>
#include <math.h>

int main(void)
{

    float f;
    int Q = 0;
    int D = 0;
    int N = 0;
    int P = 0;
    
    do {  
        printf("How much change do you have?\n");
        scanf("%f", &f);
    }
    while (f < 0);
    
    f = f * 100;
    f = round(f);
    
    while (f > 25) {
        f = f - 25;
        Q++;
    }
    printf("Quarters = %i\n", Q);
    
    while (f > 10) {
        f = f - 10;
        D++;
    }
    printf("Dimes = %i\n", D);
    
    while (f > 5) {
        f = f - 5;
        N++;
    }
    printf("Nickels = %i\n", N);
    
    while (f >= 1) {
        f = f - 1;
        P++;
    }
    printf("Pennies = %i\n", P);
    
    printf("%i\n", P + N + D + Q);
    
    return 0;
}
