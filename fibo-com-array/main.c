
#include <stdio.h>

int main()
{
    int x,y,z,fibo[40],i; 
    
    x = 1;
    y = 0;
    z = 0;
    for(i = 0; i < 40;i++){
     fibo[i] = y;   
     z = x + y;
     y = x;  
     x = z;
        
    }
    
    for(i = 0;i < 40;i++){
    printf(" %d |",fibo[i]);    
    }
    
    
    
    return 0;
}
