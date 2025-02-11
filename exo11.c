#include<stdio.h>

int main()
{
  int N;
  double mult=1;
  printf("Calcul de factoriel\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  printf("%d! = ", N);
  while (N>1)
  {
    mult=mult*N;
    printf("%d*", N);
    N--;
  }
  
  printf("1 = %lf\n", mult);
  return (0);
}
