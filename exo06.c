#include<stdio.h>

int main()
{
  int c, d;
  printf("Calcul de la moyenne\n");
  float a, b, M=0;
  printf("Entrez la note: ");
  scanf("%f", &a);
  printf("Entrez son coefficient: ");
  scanf("%d", &c);
  printf("Entrez la note: ");
  scanf("%f", &b);
  printf("Entrez son coefficient: ");
  scanf("%d", &d);
  M = (a+b)/(c+d);
  printf("Moyenne = %f\n", M);
  return (0);
}
