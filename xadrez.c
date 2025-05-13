#include <stdio.h>

int main(){

    int b;
    int t =0;
    int escolha;
    

printf("1. Rainha\n");
printf("2. Bispo\n");
printf("3. Torre\n");
printf("Escolha:\n");
scanf("%d",&escolha);

switch (escolha)
{
case 1:
   printf("Rainha\n");
   for(int r = 0; r <8; r++)
{
    printf("Esquerda\n");
}
    break;
case 2:
    printf("Bispo\n");
while (b<5)
{
    printf("cima, direita\n");
    b++;
}
break;
case 3:
printf("Torre\n");
do
{
    printf("direita\n", t);
    t++;
} while (t<5);
break;

default:
printf("Opção Inválida!\n");
    break;
}


}
