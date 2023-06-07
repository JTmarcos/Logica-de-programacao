#include <stdio.h>
#define TAM 100
int main()
{
   int congruente,m,i,j,r1,r2,vetor1[TAM],vetor2[TAM],i2,i3;
  
  
  printf("i: ");
  scanf("%d",&i);
  
  printf("m: ");
  scanf("%d",&m);
  
  printf("j: ");
  scanf("%d",&j);
  
  for(i2=1;i2<=i;i2++){
      
      vetor1[i2] = i2;
  }
  
   for(i2=1;i2<=j;i2++){
      
      vetor2[i2] = i2;
  }
  
  
  
   for(i2=1;i2<=i;i2++){
      
      for(i3=1;i3<=j;i3++){
      
      
      r1 = vetor1[i2] % m; 
      
      r2 = vetor2[i3] % m;
      
      
      if(r1 == r2){
        
        printf("%d é congruente do modulo %d e %d",vetor1[i2],m,vetor2[i3]);
        printf("(%d resto %d = %d = %d resto %d)\n",vetor1[i2],m,r1,vetor2[i3],m);
        
        
        
        
        
        
      }
      }
      

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
  }
  
  

  
    

    return 0;

    
    
    
    
    
    
    
    
}
