#include<stdio.h>

int main()
{
  int a,b;
  printf("Produit positif ou négatif\n");
  printf("Entrez le premier nombre: ");
  scanf("%d", &a);
  printf("Entrez le second nombre:");
  scanf("%d", &b);
  if ((a<0) && (b<0) || (a>0) && (b>0))
  {
    printf("Leur produit est positif.\n");
  }
  else
  {
    printf("Leur produit est négatif.\n");
  }
  return (0);
}
