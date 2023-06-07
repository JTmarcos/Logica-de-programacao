
#include <stdio.h>

int main()
{
    int matriz1[3][3],matriz2[3][3],i,j,flag = 0;
  
  for(i=0;i<3;i++){
      
      for(j=0;j<3;j++){
          scanf("%d",&matriz1[i][j]);
          
      }
  }
   
   printf("*****************************************************************************\n");
   for(i=0;i<3;i++){
      
      for(j=0;j<3;j++){
          scanf("%d",&matriz2[i][j]);
          
      }
  }
  
  
    for(i=0;i<3;i++){
      
      for(j=0;j<3;j++){
          
        if(matriz2[i][j] == matriz1[i][j]){
            printf("As duas matrizes na posição [%d][%d] tem o mesmo valor de %d\n",i,j,matriz1[i][j]);
            flag =1;
        }  
          
      }
        
    }
  
  if(flag == 0){
  printf("Não foi possivel encontrar nenhum numero semelhante na mesma posição");
  }
  
  
    return 0;
}
