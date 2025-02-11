#include<stdio.h>

int main()
{
  int N, i;
  double M=1, S=0;
  printf("Calcul de la somme des factoriels\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  printf("S = ");
  for ((i=1); (i<=N); (i++))
  {
    printf("%d", i);
    if(i<N)
    {
      printf("!+");
    }
    M=M*i;
    S=S+M;
  }
  printf("! = %.0lf\n", S);
  return(0);
}
