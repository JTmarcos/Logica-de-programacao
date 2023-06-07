
#include <stdio.h>

int main()
{
    int digitos[100],entrada,base,divisor = 1,r,i=0,i2=0,i3,numerosig = 0;
    
    printf("Digite um número para conferir se tem numeros iguais");
    scanf("%d",&entrada);
     
    
     while(divisor <= entrada){
         
        divisor *= 10;
     }
   divisor/=10;

if(divisor == 1){
        printf("o número so tem um digito");
        return 0;
        
    }
    
    while(divisor > 0){
    
    digitos[i] = entrada / divisor;     
    i++;    
    entrada = entrada % divisor;    
    divisor /= 10;
    i2++;
        
    }
  
   for(i=0;i < i2;i++){
     i3 = i + 1;
    while(i3 < i2){
        
        if(digitos[i] == digitos[i3]){
            numerosig = 1;
            
        }
        
    
       i3++; 
    }
         if(numerosig == 1){
         printf("Tem numeros iguais\n");
        break;
    } 
    
       
       
       
   }
if(numerosig == 0){
printf("Não tem numeros iguais");
}


    return 0;
}
