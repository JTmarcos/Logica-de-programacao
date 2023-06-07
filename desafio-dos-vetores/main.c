#include <stdio.h>

int main()
{
   int vetor1[10],vetor1f[10],vetor2[10],i,i2,k=0,k2=0,coloque = 0,vetorf[10];
   
    for(i=0;i<10;i++){
        scanf("%d",&vetor1[i]);
    }
  printf("************************************\n");
 
    for(i=0;i<10;i++){
        scanf("%d",&vetor2[i]);
    }
    
    
    for(i=0;i<10;i++){
        coloque = 0;
        for(i2= 0;i2<10;i2++){
           
           if(i2 == i){
               continue;
           }else if(vetor1[i] == vetor1[i2]){
                
                coloque = 1;
                
                
            }
            }
          
          if(coloque == 0){
                
                vetor1f[k] = vetor1[i];  
                k++;
        }
        }
    
    for(i=0;i<k;i++){
        coloque = 0;
        for(i2=0;i2<10;i2++){
           
            
            if(vetor1f[i] == vetor2[i2]){
                
                coloque = 1;
                
                
            }
            }
          
          if(coloque == 0){
                
                vetorf[k2] = vetor1f[i];  
                k2++;
        }
        
        
    }
    
    for(i=0;i<k2;i++){
        printf("%d ",vetorf[i]);
    }
    
    
    
    
    return 0;
}
