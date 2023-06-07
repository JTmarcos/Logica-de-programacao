#include <stdio.h>
#define TAM 3
int main()
{
  int matriz[TAM][TAM],maior,flag=0,flag2=0,i,j,k,l,cont1,cont2;
  
  for(i=0;i<TAM;i++){
      
      for(j = 0;j<TAM;j++){
          
          scanf("%d",&matriz[i][j]);
      }
  }
  
  for(i=0;i<TAM;i++){
      cont1 = 0;
        cont2 = 0;
        for(j = 0;j<TAM;j++){
            
            if(matriz[i][j]>1){
                flag = 1;
                break;
            }
            
            if(matriz[i][j] == 1){
               l = j;
               for(k=0;k <= TAM;k++ ){
                   
                   if(matriz[k][l] == 1){
                           cont1++;}
                  }
               k = i;
               
               for(l=0;l<TAM;l++){
                   if(matriz[k][l] == 1){
                           cont2++;}
                   
               }
               
               
                
            }
            
        
            
            
        }
      
          
      
      
      
      if(cont1 > 1 || cont2 >1 || cont1 == 0 || cont2 == 0){
          flag2 = 1;
          break;}
  
}
  
  
  if(flag == 0 && flag2 == 0){
      
      printf("Matriz de permutação");
      
      
  }else{printf("não é de permutação");}
  
  
  
  
  
  
  
  
  
  
  
  
  

    return 0;
}
