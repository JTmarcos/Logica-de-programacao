
#include <stdio.h>

int main()
{
    int n,n2,np = 0,s,i = 1,i2;
    printf("Digite um numero: ");
    scanf("%d", &n);

   while(np == 0){
       n2 = n + i;
       i2 = 1;
       s = 0;
     while(i2 < n2){
         
        if(n2 % i2 == 0){
            s = s + i2;  
        }
        i2++; 
         
         
         
     }  
      i++;
       if(s == n2){
        np = 1;
        break;
       }
       
   }

  printf("%d é perfeito",n2);









    return 0;
}
