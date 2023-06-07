
#include <stdio.h>

int main()
{
    int vetor[20],i2,i,ncrescente = 0, ndescrescente = 0;
    
    for(i=0;i<20;i++){scanf("%d",&vetor[i]);}
    
    
    
    for(i=0;i<20;i++){
        
        for(i2=i;i2<20;i2++){
            
           if(vetor[i]>vetor[i2]){ncrescente=1;}
            if(vetor[i]<vetor[i2]){ndescrescente=1;}
            
            
            
        }
        
    }

if(ncrescente == 0&&ndescrescente == 1){printf("é crescente");}
else if(ncrescente == 1&&ndescrescente == 0){printf("é decrescente ");}
else{printf("nao esta ordenada");}

    return 0;
}

