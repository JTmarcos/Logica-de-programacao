#include <stdio.h>

int main()
{
    int termo=0,sequencia[20],n,i,adiciona,i2,sub;
    sequencia[0] = 0;
    for(i = 0;i<20;i++){
        adiciona = 0;
         sub = sequencia[i - 1] - termo;
        if(sub<0){
            sub = sequencia[i - 1] + termo;
        }
        
        
        
        for(i2=0;i2<20;i2++){
            
            if(sub == sequencia[i2]){adiciona = 1;}
            
            
        }
        
        if(adiciona == 0){sequencia[i] = sub;}
        if(adiciona == 1){sequencia[i] = sequencia[i - 1] + termo;}
        
        
        termo++;
        
    }
    
     for(i = 0;i<20;i++){printf("%d ",sequencia[i]);}
    

    return 0;
}
