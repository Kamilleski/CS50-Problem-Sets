#include <stdio.h>

int main(void)
{
    int pH, n;
    char octothorpe = '#';
    char space = ' ';
    
    do
    {
        printf("How tall should the pyramid be, between 0 and 23?\n");
        scanf("%i", &pH);
    }
    while ( pH < 0 || pH > 23 );
    
    for ( n = 1; n <= pH; n++){  //starting at top row and looping over remaining rows
        for(int i = 0 ; i < (pH + 1); i++){  // looping over columns
            if(i < (pH - n)) {
                printf("%c", space);
            }
            else {
                printf("%c", octothorpe);
            }
        }

        printf("\n");
    }
    return 0;
}
