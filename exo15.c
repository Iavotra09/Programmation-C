#include<stdio.h>
#include<math.h>

int main()
{
  int N, i;
  double S=0;
  printf("Calcul de la somme des puissances\n");
  printf("Entrez un nombre: ");
  scanf("%d", &N);
  if (N<=0)
  {
    printf("S=1\n");
  }
  else if(N==1)
  {
    printf("S=1+10=11\n");
  }
  else
  {
    S=1+10;
    printf("S=1+10");
    for((i=2);(i<=N);(i++))
    {
      printf("+10^%d", i);
      S=S+pow(10,i);
    }
    printf("=%.0lf\n", S);
  }
  return (0);
}
