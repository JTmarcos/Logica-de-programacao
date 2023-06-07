
#include <stdio.h>

int main()
{
    int n,primo,i,dimin,r,nr;
    scanf("%d",&n);
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
           primo = 1;
           break;
           
       }
       
       
       
       dimin++; 
    
        
    }
    
        
        printf("%d",nr);
    
    
    return 0;
}
