
#include <stdio.h>

int main()
{
 int n,i = 0;
scanf("%d",&n);

int vetor[n] ;

   while(i < n){
   
      if(i == 0){
          vetor[i] = 0;
      }else if(i == 1){
          vetor[i] = 1;
      }else{vetor[i] = vetor[i - 1] + vetor[i - 2];}
       
       
       printf("|%d| ",vetor[i]);
       i++;
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}
