#include <stdio.h>

int main()
{
   int sub,i=0,numero = 1,n,salvar;
   
   scanf("digite um numero para saber sua raiz quadrada");
   scanf("%d",&n);
   salvar = n;
   while(n > 0){
       
      sub = n - numero;
      
      
          
          i++;
          numero += 2;
          n = sub;
       
       
   }
   
   printf("a raiz quadrada de %d é %d",salvar,i);
   
   
   
   
   
   
   
   
   
   
   
   
   
}
