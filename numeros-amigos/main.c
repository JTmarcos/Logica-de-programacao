#include <stdio.h>

int main()
{
   int n1,n2,s1,s2,i1,i2; 
    i1 = 1;
    s1 = 0;
    i2 = 1;
    s2 = 0;
    printf("digite o primeiro número: ");
    scanf("%d",&n1);
    printf("digite o segundo número: ");
    scanf("%d",&n2);
    
    while(i1 < n1){
        
        if(n1 % i1 ==0){
        s1 = s1 + i1;    
        }
        
        i1++;
        
    }
    
    
     while(i2 < n2){
        
        if(n2 % i2 == 0){
        s2 = s2 + i2;    
        }
        
        i2++;
        
    }
    
    if(s1 == n2 && s2 == n1){
        
    printf("%d e %d são numeros amigos\n",n1,n2);
    }else{
        printf("eles não são numeros amigos\n");
    }
    
    printf("a soma do primeiro :%d\nsoma do segundo %d",s1,s2);
    
    
    
    return 0;
}
