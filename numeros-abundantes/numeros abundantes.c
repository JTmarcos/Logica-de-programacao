#include <stdio.h>

int main()
{
 int n,soma,controle,n2,i;
    
    
    printf("Digite um número: ");
    scanf("%d",&n);
    n2 = 1;
    controle = 1;
    
    while(controle <= n){
    i = 1;
    soma = 0;
    
    
    while(i <= n2){
     
    if(n2 % i == 0){
    soma = soma + i;
        
    }
     i++;
    }
    
    if(soma > n2 * 2){
     printf("%d ",n2);
    controle++;
        
    }
     n2++; 
        
    }
    
    return 0;
}
