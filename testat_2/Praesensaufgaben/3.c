#include <stdio.h>

int main(void)  {
    
    int a=6, b=5,c=7;
    
    if(a > c)   {
        int temp = a;
        a = c;
        c = temp;
    }
    
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    if(b > c)   {
        int temp = b;
        b = c;
        c = temp;
    }
    
    
    
    printf("low: %d, mid: %d, high: %d", a,b,c);
    
    
    printf("\n");
    return 0;
}
