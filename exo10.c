#include<stdio.h>

int main()
{
  int N, i;
  printf("Afficher les diviseurs d'un nombre\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  printf("Les diviseurs de %d sont: ",N);
  for ((i=1); (i<=N); (i++))
  {
    if(N%i==0)
    {
      printf("%d ", i);
    }
  }
  printf("\n");
  return (0);
}
