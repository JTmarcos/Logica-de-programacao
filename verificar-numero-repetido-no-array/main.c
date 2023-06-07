//verificar se tem um elemento dupplicado dentro do array
#include <stdio.h>
#define TAM 100
int main()
{
  int array[TAM],comparador,positivo,i,n,i2,pelomenosum=0,k=0,jafalei[TAM],positivo2=1;
  scanf("%d",&n);
  
  
  
 for(i=0;i<n;i++){
     scanf("%d",&array[i]);
 }
 
 
 printf("numeros repetidos: ");
 for(i=0;i<n;i++){
     positivo = 0;
    
     
     for(i2=0;i2<n;i2++){
         
         
         if(i == i2){
             continue;
         }else{
             
             if(array[i] == array[i2]){
                 positivo = 1;
                 pelomenosum= 1;
                  
             }
            }
        }
     
     if(positivo == 1){
        positivo2 = 0;
         
         for(i2=0;i2<k;i2++){
             
             if(array[i] == jafalei[i2]){
                 positivo2 = 1;
             }
             
             
             
             
         }
         }
     
     
     if(positivo2 == 0){
             
             printf("%d ",array[i]);
             jafalei[k]= array[i]; 
                 k++;
         positivo2 = 1;
     
         
     }
         
     
     
     
     
     
 }
     
    if(pelomenosum == 0){
        printf("nenhum");
    } 
     
 

    return 0;
}

