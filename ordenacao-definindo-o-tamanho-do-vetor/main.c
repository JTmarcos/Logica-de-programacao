#include <stdio.h>
#define TAM 1000
int main()
{
    
    int vetor[TAM],aux,i,n,max,j;
    
    for(i=0;i<TAM;i++){
       n=0;
       printf("Digite um numero para a posição V[%d](ou se deseja cancelar digite (0): ",i);
       scanf("%d",&n);
       
       if(n == 0){
          max = i; 
           break;
       }else{
       
       vetor[i] = n;
       }
    
        
    }
    
    for(i=0;i<max;i++){
        aux = 0;
        for(j=i+1;j<max;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    for(i=0;i < max;i++){
        
        
        printf("%d ",vetor[i]);
        
    }
    

    return 0;
}
