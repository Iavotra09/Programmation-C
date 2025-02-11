#include<stdio.h>

int main()
{
  int N;
  double i, S=0;
  printf("Calcul de la somme 1/1+1/2+...+1/N\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  printf("S = ");
  for ((i=1); (i<=N); (i++))
  {
    printf("1/%.0lf", i);
    if(i<N)
    {
      printf("+");
    }
    S=S+(1/i);
  }
  printf(" = %lf\n", S);
  return (0);
}
