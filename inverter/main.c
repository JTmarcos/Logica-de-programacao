#include <stdio.h>

int main()
{
    int mult,entrada,i=0,base,i2 = 0, r,nf=0;
    
    
    
    
    printf("Digite um número para invertê-lo: ");
    scanf("%d",&entrada);
    mult = 1;
    
    while(mult <= entrada){
    mult = mult * 10;
    }
    
    mult = mult / 10;
    base = 1;
    
    while(mult != 0){
    
    r = entrada / mult;
    entrada = entrada % mult;
    r = r * base;
    mult = mult / 10;
    base *= 10;
    nf = nf + r;
        
    }
   printf("%d ",nf);
    return 0;
}


