#include <stdio.h>

int main(void)  {
    
    int i = 6;
    
    while(i>0)   {
        i--;
        
        int c = 0;
        
        while(c<i) {
            printf("*");
            c++;
        }
        printf("\n");
    }
    return 0;
}
