
#include <stdio.h>

int main()
{
     int anos,porcentagem,i = 1,i2;
     
    float valor[5]={100,100,100,100,100};
    printf("Digite a quantidade de anos: ");
    scanf("%d",&anos);
    
    printf("Digite a porcentagem: ");
    scanf("%d",&porcentagem);
    
    printf("Anos   ");
    
    for(i=0;i < 5;i++){
        printf("   %d      ",porcentagem+i);
    }
    
   
    printf("\n");
    for(i=1;i <= anos;i++){
        printf("  %d    ",i);
        
       for(i2 = 0;i2 < 5;i2++){
           
         valor[i2] = valor[i2] * (((porcentagem + i2) / 100.0 ) + 1);
           
         printf("%.2f    ",valor[i2]);
           
           
           
       }
        
        
        printf("\n");
        
        
        
        
        
        
    }
    
return 0;
    
}

    



