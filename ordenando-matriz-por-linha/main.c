#include <stdio.h>
#define TAM1 3
#define TAM2 3
int main()
{
    
    int matriz[TAM1][TAM2],aux,i,j,l,m,substituidor = 0,vetor[TAM1 * TAM2];
    
    
    for(i=0;i<TAM1;i++){
       
        for(j=0;j<TAM2;j++){
            
            scanf("%d",&matriz[i][j]);
        
            
        }
        
        
        
    }
    
    
    
    
    
    for(i=0;i<TAM1;i++){
       
        for(j=0;j<TAM2;j++){
            
            for(l=i;l<TAM1;l++){ 
             
              for(m=j;m<TAM1;m++){
                
                if(matriz[i][j]>matriz[l][m]){
                    
                   
                   
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[l][m] ;
                    matriz[l][m] = aux;
                }
                 
            }
        
    }
            
    }
        
    }
    
 
    for(i=0;i<TAM1;i++){
        for(j=0;j<TAM2;j++){
            
            printf(" %d ", matriz[i][j]);
            
        }
        printf("\n");
    }





    return 0;
}
