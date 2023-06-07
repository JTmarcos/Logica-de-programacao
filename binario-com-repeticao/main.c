#include <stdio.h>
int main()
{
 int n,i,j,resto,casa = 2;  
   
   scanf("%d",&n);
    while(casa < n){
       
       casa*=2;
   }
   
   while(casa > 0){ 
 
   

   resto = n / casa % 2;
   printf("%d",resto);
   casa /= 2;
 
}




return 0;
}
