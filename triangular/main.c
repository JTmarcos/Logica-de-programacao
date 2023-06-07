#include <stdio.h>

int main()
{
int r, digitado;
int n1 = 1, n2 = 2, n3 = 3;
    
    
    printf("Digite um número ");
    scanf("%d",&digitado);
   do{
     n1++; 
     n2++;
     n3++;
     
      r = n1 * n2 * n3;
      
      
      
      
    }while(r < digitado);

   
   
   if(r == digitado){
   printf("%d:resultado \n",r);
   printf("%dx%dx%d",n1,n2,n3);}
   else{
     printf("Não é um número triangular");  }




    return 0;
}
