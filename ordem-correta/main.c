
#include <stdio.h>

int main()
{
   int aux,vetor[10]={5,8,6,7,1,0,3,3,11,2},i,j;
   
   for(i=0;i<10;i++){
       
       
       for(j = i;j<10;j++){
           
           if(vetor[i] > vetor[j]){
               
               aux = vetor[i];
               vetor[i] = vetor[j];
               vetor[j] = aux;
               
           }
           
           
           
       }
       
       
   }
   for(i=0;i<10;i++){
       printf("%d ",vetor[i]);
       
   }
   
   
    
    return 0;
}
