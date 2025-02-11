#include<stdio.h>

int main()
{
  int N, i;
  double M=1, S=0;
  printf("Calcul de la somme 1/1!+1/2!+..+1/N!\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  printf("S = ");
  for((i=1); (i<=N); (i++))
  {
    printf("1/%d", i);
    if(i<N)
    {
      printf("!+");
    }
    M=M*i;
    S=S+(1/M);
  }
  printf("! = %lf\n", S);
  return(0);
}
