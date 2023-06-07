#include <stdio.h>
#define TAM 100
int main()
{
    int n,i = 2,primo = 0,r,p1=2,p2=2,primos[TAM],i2,primo2,k=0, fala = 0;
    
    
    printf("Digite o numero de chen q vc quer conferir: ");
    scanf("%d",&n);
     
     
    if(n == 2){
      primo = 1;
         
     }else if(n == 1 || (n + 2) % 2 == 0){
        printf("%d não é um primo de chen",n);
        return 0;
    }else{
    
    while(i < n + 2){
        
        if((n + 2) % i == 0){
            primo = 1;
            break;
        }
         i++;
     }
    }
    
    if(primo == 0){
        printf("%d É um primo de chen",n);
       fala = 1;
        
    }else{
       
        for(i=2;i < n + 2;i++){
            primo2 = 0;
            i2 = 2;
            while(i2 < i  ){
                
                if(i % i2 == 0){
                    primo2 = 1;
                }
                i2++;
            }
            
          if(primo2 == 0){
             
           primos[k] = i;
              k++;
              
          } 
         }
         
         for(i=0; i < k;i++){
             
             for(i2 = 0;i2 < k ;i2++){
                 
                 if(primos[i] * primos[i2] == n + 2 ){
                     
                     printf("%d é um numero primo de chen (%d + 2) = (%d * %d)",n,n,primos[i],primos[i2]);
                     fala = 1;
                     return 0;
                     
                 }
                 
                 
             }
             
             
             
         }
        
        
    
        
        
        
    }
        
    
      if(fala == 0){
                printf("não é um numero de chen");
            }
    
    
    
    

    return 0;
}
