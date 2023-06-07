#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros2[10],numeros[10],i,i2,cont;
    
    
    for(i=0;i<10;i++){
        
        printf("Digite um numero: ");
        scanf("%d",&numeros[i]);
        fflush(stdin);
        
        }

    
    
    
    
    for(i=0;i<10;i++){
	  cont = 0;
	    
		for(i2=0;i2<10;i2++){
		
		if(numeros[i] > numeros[i2]){
		cont++;	
		  
		}}
		
		fflush(stdin);
		numeros2[cont] = numeros[i];
		
			
		
		
		
		}
	
	  for(i=0;i<10;i++){
	  
	  if(numeros2[i] == 0){
	   
	   numeros2[i] = numeros2[i-1];
	  
	  
	  
	  }
	  }
	  
	  
	  
	  
	  
	
	
	
	  
	  
	  
	  
	  
	  for(i=0;i<10;i++){
        
       
       printf("%d ",numeros2[i]);
        
        
        }
	
	
	
	
	return 0;
	
	}
	
	
	