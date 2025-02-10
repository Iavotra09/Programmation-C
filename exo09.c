#include<stdio.h>

int main()
{
  int N, i;
  printf("Les nombres pairs compris entre 1 et N\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  for ((i=1); (i<=N); (i++))
  {
    if(i%2==0)
    printf("%d ",i);
  }
  printf("\n");
  return (0);
}
