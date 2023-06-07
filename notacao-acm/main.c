#include <stdio.h>

int main()
{
  int n,divi,i=1,mult,i2,soma;
    scanf("%d",&n);
    
    divi = 10;
    while(divi <= n){
        divi *= 10 ;
        i++;
        
    }
    
    divi /= 10;
    soma = 0;
   
    while(i>0){
    i2 = i;
    mult = 1;
   
    while(i2 > 0){
     
     mult *= i2;
        i2--;
    }     
    
    
    soma = ((n / divi) * mult) + soma;
     
    n = n % divi;  
    divi /= 10;
    i--;
    
        
        
    }
    
    
    
    
    
    printf("%d ",soma);
    
    
    
    
    
    
    
    
    
    
    
    
    
}
