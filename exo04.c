#include<stdio.h>

int main()
{
  float a, b, S=0, M=1;
  printf("Calcul de la somme des notes et de la moyenne\n");
  printf("Entrez la première note: ");
  scanf("%f", &a);
  printf("Entrez la note suivante: ");
  scanf("%f", &b);
  S=a+b;
  M=S/2;
  printf("Somme = %f ; Moyenne = %f\n", S, M);
  return (0);
}
