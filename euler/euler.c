#include <stdio.h> 

int main()
{
    int controle = 1,n;
    float soma,mult =1;
    scanf("%d",&n);
    
    while(controle <= n){
        mult = mult * controle;
        
        soma = soma + (1 / mult);
        controle++;
        
    }
   
   soma = soma + 1;
   printf("%f",soma);
   
   
   
   

    return 0;
}
