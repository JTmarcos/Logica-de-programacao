#include <stdio.h>

int main()
{
    int i = 1,constante = 1,divisor = 0,n;
    float soma = 0;
    scanf("%d",&n);
    
    while(i <= n){
        
        divisor = constante + divisor;
        
        soma = soma + ( 1.0 / divisor);
        
        constante++;
        i++;
        
        
        
        
    }
    
    printf("%f",soma);
   

 return 0; 
}
