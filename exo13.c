#include<stdio.h>

int main()
{
  int N, i;
  double mult=1;
  printf("Multiplication de 1 à N\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  for ((i=1); (i<=N); (i++))
  {
    printf("%d", i);
    if(i<N)
    {
      printf("*");
    }
    mult=mult*i;
  }
  printf(" = %lf\n", mult);
  return (0);
}
