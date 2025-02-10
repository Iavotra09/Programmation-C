#include<stdio.h>

int main()
{
  int i, N;
  printf("Affichage de 1 à un nombre N\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);

  for((i=1); (i<=N); (i++))
  {
    printf("%d ", i);
  }
  printf("\n");
  return (0);
}
