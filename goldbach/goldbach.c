#include <stdio.h>

int main()
{
 int n,i;
 int dimin,r,nr,i2,dprimo,primo;
  
  
  for(n = 500;n <= 1000; n+=2){
    primo = 0;
    dimin = 2;
    i = 2;
    
    while(primo == 0){
    nr = n - dimin;
    i = 2;
    r = 0;
    while(i <= nr){
        
       if(nr % i == 0){
        r = r + i;
        
       }
       
       i++;  
        
    }
     if(r == nr){
       i2 = 2;
       dprimo = 0;
       
       while(i2 <= dimin / 2){
           
           if(dimin % i2 == 0){
               dprimo = 1;
           }
           i2++;
       } 
    
       
       if(dprimo == 0){
           primo = 1;
           printf("%d = %d + %d\n",n,nr,dimin);
          break;
           
       }
     }
       
       dimin++; 
    }
}
     return 0;
}