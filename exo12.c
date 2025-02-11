#include<stdio.h>

int main()
{
  int N, i;
  double S=0;
  printf("Calcul de la somme 1 jusqu'à N\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  for ((i=1); (i<=N); (i++))
  {
    printf("%d", i);
    if(i<N)
    {
      printf("+");
    }
    S=S+i;
  }
  printf(" = %lf\n", S);
  return (0);
}
