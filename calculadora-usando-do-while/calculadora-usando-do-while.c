#include <stdio.h>
#include <math.h>
int main()
{
 int opc,opc2;
 float n1,n2,res;
 
 do{
     printf("Para soma digite 1\n");
     printf("Para subtração digite 2\n");
     printf("Para multiplicação digite 3\n");
     printf("Para divisão digite 4\n");
     printf("Para tirar a raiz digite 5\n");
     printf("Para potenciacao digite 6\n");
     scanf("%d",&opc);
     
     switch(opc){
         
         case 1:
         printf("Digite o primeiro número: ");
         scanf("%f",&n1);
         printf("Digite o segundo número: ");
         scanf("%f",&n2);
         res = n1 + n2;
         printf("O resultado é %.2f\n",res);
         break;
         
         
         case 2:
         printf("Digite o primeiro número: ");
         scanf("%f",&n1);
         printf("Digite o segundo número: ");
         scanf("%f",&n2);
         res = n1 - n2;
         printf("O resultado é %.2f\n",res);
         break;
         
         case 3:
         printf("Digite o primeiro número: ");
         scanf("%f",&n1);
         printf("Digite o segundo número: ");
         scanf("%f",&n2);
         res = n1 * n2;
         printf("O resultado é %.2f\n",res);
         break;
         
         case 4:
         printf("Digite o primeiro número: ");
         scanf("%f",&n1);
         printf("Digite o segundo número: ");
         scanf("%f",&n2);
         res = n1 / n2;
         printf("O resultado é %.2f\n",res);
         break;
         
         case 5:
         printf("Digite o primeiro número(radicando): ");
         scanf("%f",&n1);
         printf("Digite o segundo número(indice): ");
         scanf("%f",&n2);
         res =pow(n1,1/n2);
         printf("O resultado é %.2f\n",res);
         break;
         
         case 6:
         printf("Digite o primeiro número(base): ");
         scanf("%f",&n1);
         printf("Digite o segundo número(expoente): ");
         scanf("%f",&n2);
         res = pow(n1,n2);
         printf("O resultado é %.2f\n",res);
         break;
         
         default:
         printf("opçao inválido\n");
         break;
         
     }
     printf("Se deseja encerrar o programa digite 7,Se deseja continuar digite qualquer outro número: ");
     scanf("%d",&opc2);
     
     
     
     
 }while(opc2 != 7);
 
 printf("Programa encerrado");
 
 
 
 
 
 
 

    return 0;
}
