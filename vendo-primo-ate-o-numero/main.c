
#include <stdio.h>

int main()
{
    int n,s = 0,i,i2,primo;
    
    printf("Digite um número");
    scanf("%d",&n);
    i = 2;
    
    while(i <= n){
        i2 = 2; 
        primo = 1;
        while(i2 <= i / 2){
        
        if(i % i2 == 0){
         primo = 0;
        }
        i2++;
        }
        if(primo == 1){
            printf(" %d |", i);
        }
        i++;
    }

    return 0;
}
