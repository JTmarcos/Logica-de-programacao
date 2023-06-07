#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int vetor1[20],troca,i,i2;
    
    for(i = 0; i<20; i++){
        
        scanf("%d", &vetor1[i]);
        system("clear");   
         
    }
 
 
    for(i=0;i<20;i++){
        
        for(i2=0;i2<20;i2++){
            
            if(vetor1[i2] > vetor1[i]){
                troca = vetor1[i];
                vetor1[i] = vetor1[i2];
                vetor1[i2] = troca;
                
            }

            
            
        }
        
        
    }
    for(i = 0;i<20;i++){
        
        printf("%d ", vetor1[i]);
    }    
    
    return 0;
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    