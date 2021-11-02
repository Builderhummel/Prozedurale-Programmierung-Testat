#include <stdio.h>
#include <stdint.h>

int main(void)  {
    
    //uint16_t n = (uint16_t) - 1; //65535
    uint16_t n = 6;

    int bits = 16-1;

    int sol[16];
    
    //initialize array sol[]
    for (int i = 0; i<16; i++)  {
        sol[i] = 0;
    }
    
    printf("Number to convert: %d\n", n);
    
    //check if n = 0;
    /**if(n == 0) {
        printf("0000000000000000\n");
        return 0;
    }**/
    
    //mod2, then devide by 2
    while (n > 0)   {
        
        sol[bits] =  n % 2;
        //printf("n=%d\n", n%2); //debug
        
        n = n/2;
        
        bits--;
        
    }
    
    //print sol[]
    for (int i = 0; i<16; i++)  {
        printf("%d", sol[i]);
    }
    
    printf("\n");
    return 0;
}
