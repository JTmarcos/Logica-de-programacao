#include <stdio.h>
#define TAM 7
int main()
{
   int vetor[TAM],i,j,soma,comb[TAM], maiorf[TAM],r;
   
   for(i=0;i <TAM;i++){
      scanf("%d",&vetor[i]);
       
   }
   
   for(i=0;i<TAM;i++){
       soma = 0;
      
       
       for(j = i ;j<TAM;j++){
        soma += vetor[j];
        
        comb[j] = soma;
           
           
           
       }
       
       for(j = 0;j<TAM;j++){
          if(comb[j] > maiorf[i]){
              maiorf[i] = comb[j];
              
          }
           
           
       }
   
       
       
       
       
   }
   r = 0;
   for(i = 0;i<TAM;i++){
       
       if(maiorf[i] > r ){
          r = maiorf[i]; 
           
       }
       
       
   }

printf("a maior combinação é %d",r);
    return 0;
}

