
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[15],vetor2[15],cont,i,i2,escrever;
    
    for(i=0;i<15;i++){
       
        scanf("%d",&vetor[i]);
        system("clear");
    }
        
        
    
     for(i=0;i<15;i++){
         escrever = 1;
         cont = 0;
         
         
         for(i2 = 0;i2<15;i2++){
             
             if(vetor[i] == vetor[i2]){
             cont++;}
                 
             
         }   
        for(i2 = 0;i2<15;i2++){
          if(vetor[i] == vetor2[i2]){
              escrever = 0;
          }
      
            
        }
     
    if(escrever == 1){
    if(cont>1){printf("o numero %d ocorre %d vezes\n",vetor[i],cont);}
    else if(cont == 1){printf("o numero %d ocorre %d vez\n",vetor[i],cont);}
    }
    
     vetor2[i] = vetor[i];
         
     }
    
    
    
    
 
    return 0;
}
