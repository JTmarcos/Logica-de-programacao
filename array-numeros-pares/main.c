#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    int numero[20],i,contador = 0,numero2[20];
   
   for(i=0;i<20;i++){
    
    scanf("%d",&numero[i]);
      system("clear");
       
   }
    
   printf("Numeros pares : ");
   
   for(i=0;i<20;i++){
    
   if(numero[i] % 2 == 0){
       printf(" %d |",numero[i]);
      contador++;
   }
       
       
   }
    
    if(contador == 0 ){
        printf("nenhum");
    }
    printf("\n");
    
    printf("Quantidade de numeros pares: %d",contador);
    
    
    return 0;
}
