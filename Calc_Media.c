#include <stdio.h>
#include <math.h>

int main()
{
  ///declara��o de vari�veis
  float media, nota1, nota2, nota3, nota4;

  ///entrada
  printf("\nDigite a nota do 1o bimestre: ");
  scanf("%f", &nota1);
  printf("\nDigite a nota do 2o bimestre: ");
  scanf("%f", &nota2);
  printf("\nDigite a nota do 3o bimestre: ");
  scanf("%f", &nota3);
  printf("\nDigite a nota do 4o bimestre: ");
  scanf("%f", &nota4);

  ///processamento
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  ///sa�da
  printf("\nA media final eh %.2f", media);
}
