#include <stdio.h>

int main(void)  {
    
    int n = 12;
    
    int i = n;
    
    while(i>0) {
        
        if((n % i) == 0 && i != 1)
            printf("Natuerlicher Teiler: %d\n", i);
        i--;
    }
    
    return 0;
}
