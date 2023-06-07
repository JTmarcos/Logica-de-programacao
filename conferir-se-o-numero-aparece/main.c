
#include <stdio.h>

int main()
{
    int matriz1[4][4],matriz2[4][4],i,j,l,m,ok;
  
  for(i=0;i<4;i++){
      
      for(j=0;j<4;j++){
          scanf("%d",&matriz1[i][j]);
          
      }
  }
   
   printf("*****************************************************************************\n");
   
   for(i=0;i<4;i++){
      
      for(j=0;j<4;j++){
          scanf("%d",&matriz2[i][j]);
          
      }
  }
  
  
  
  
  
  
  
  
  for(i=0;i<4;i++){
      
      for(j=0;j<4;j++){
           ok = 0;
           for(l=0;l<4;l++){
              if(ok == 1){break;}
                for(m=0;m<4;m++){
                    
                   if(matriz1[i][j]==matriz2[l][m]){
                       
                       printf("o valor %d aparece nas duas matrizes\n",matriz1[i][j]);
                       ok = 1;
                   }
               
               
                }
               
           }
          
     
      }
      
      
  }
  
 
  

  
    return 0;
}
