#include <stdio.h>

int main()
{
    int matriz[3][3],vetor[11]={0},i,j;
    
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            
            do{
            printf("Digite a nota: ");
            scanf("%d",&matriz[i][j]);
            
            if(matriz[i][j] > 10 || matriz[i][j] < 0){
                printf("Valor invalido, digite entre 0 e 10\n");
            }    
                
                
            }while(matriz[i][j] > 10 || matriz[i][j] < 0);
            
        }
        
    }
    
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            
        vetor[matriz[i][j]]++;
            
        
            
        }
        
        
        
        
    }
    
      for(i=0;i<11;i++){
          
          
          
          if(vetor[i]==0){printf("A nota %d aparece nenhuma vez\n",i);}
          else if(vetor[i]>1){printf("A nota %d aparece %d vezes\n",i,vetor[i]);}
          else if(vetor[i]==1){printf("A nota %d aparece %d vez\n",i,vetor[i]);}
      }
    
    
     
    return 0;
}
