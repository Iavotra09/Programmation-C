#include<stdio.h>

int main()
{
  int A, B, C, D;
  printf("Permuter les valeurs de A et B\n");
  printf("Entrez A: ");
  scanf("%d", &A);
  printf("Entrez B: ");
  scanf("%d", &B);
  C=A;
  A=B;
  B=C;
  printf("A=%d et B=%d\n\n", A, B);
  
  printf("Permuter les valeurs de A, B et C\n");
  printf("Entrez A: ");
  scanf("%d", &A);
  printf("Entrez B: ");
  scanf("%d", &B);
  printf("Entrez C: ");
  scanf("%d", &C);
  D=A;
  A=B;
  B=C;
  C=D;
  printf("A=%d; B=%d et C=%d\n", A, B, C);
  return(0);
}
