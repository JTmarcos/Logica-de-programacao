#include <stdio.h>

int main()
{
    int n,i,verificador;
    verificador = 0; 
    i = 2;
    printf("Digite um número para conferir se é primo ");
    scanf("%d", &n);
    
    while(i <= n/2){
        
       if(n % i == 0){
          verificador = 1;
       } 
        
       i++;
        
    }
    
    if(n == 1 || verificador == 1){
     printf("%d não é primo",n);
    }else{
        
     
     printf("%d é primo",n);
       
        
    }
    
    return 0;
}


