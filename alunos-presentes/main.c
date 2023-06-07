#include <stdio.h>
#define TAM 10
int main()
{
    int numeros[TAM],jacontou[10]={60,60,60,60,60,60,60,60,60,60},i,i2,cont = 0,contou,k = 0;
    
    
    for(i=0;i<TAM;i++){
        scanf("%d",&numeros[i]);
    }

    
    
    for(i=0;i<TAM;i++){
       contou = 0;
        for(i2=0;i2<TAM;i2++){
            
            
            
          if(numeros[i] == jacontou[i2]){
                contou = 1;
                
            }
            
            
        }
        
        if(contou == 0){
            cont++;
            
            jacontou[k] = numeros[i];
            k++;
            
        }
        
      
        
    }
    
    for(i=0;i<k;i++){
          printf("%d ",jacontou[i]);
        
    }
    
    printf("\nAlunos presentes : %d",cont);
    
    
    
    
    
    
    
    
    return 0;
}
