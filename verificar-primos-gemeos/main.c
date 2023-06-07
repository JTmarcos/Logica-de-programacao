
#include <stdio.h>

int main()
{
  int n,i, n1 = 3, n2 = 5, passar, primo1, primo2, i2 = 1;
  i = 1;
  scanf("%d", &n);

  while(i <= n)
    {
      i2 = 2;
     primo2 = 0;
     primo1 = 0;
	  while (i2 < n1 / 2)
	    {

	      if (n1 % i2 == 0)
		{
		  primo1 = 1;


		}
	      i2++;
	    }
	  i2 = 2;
	  while (i2 < n2 / 2)
	    {

	      if (n2 % i2 == 0)
		{
		  primo2 = 1;


		}

	      i2++;



	    }


if(primo1 == 0 && primo2 == 0){
    
    if(n2 - n1 == 2){
        
        printf("(%d,%d) ",n1,n2);
    
     i++;        
    
        
    }
    
    }
    
      n1++;
	  n2++;
        
    }

  return 0;
}
