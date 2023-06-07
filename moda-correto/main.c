#include <stdio.h>

int main()
{
  int vetor[10], frequencias[10] = {0}, maior = 0, i, i2, jafalou[10] = {0}, fale, zeromoda = 0;

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 10; i++)
  {
    for (i2 = 0; i2 < 10; i2++)
    {
      if (vetor[i] == vetor[i2])
      {
        frequencias[i]++;
      }
    }
  }

  for (i = 0; i < 10; i++)
  {
    if (maior < frequencias[i])
    {
      maior = frequencias[i];
    }
  }

  if (maior == 1)
  {
    printf("amodal");
  }
  else
  {
    for (i = 0; i < 10; i++)
    {
      if (maior == frequencias[i])
      {
        fale = 0;
        for (i2 = 0; i2 < 10; i2++)
        {
          if (vetor[i] == jafalou[i2] && vetor[i] != 0)
          {
            fale = 1;
            break;
          }
        }

        if (fale == 0)
        {
          if (vetor[i] == 0 && zeromoda == 0)
          {
            printf("A moda é %d\n", vetor[i]);
            jafalou[i] = vetor[i];
            zeromoda = 1;
          }
          else if (vetor[i] != 0)
          {
            printf("A moda é %d\n", vetor[i]);
            jafalou[i] = vetor[i];
          }
        }
      }
    }
  }

  return 0;
}
