#include<stdio.h>

int main()
{
  int a;
  printf("Nombre positif ou négatif\n");
  printf("Veuillez entrez un nombre: ");
  scanf("%d", &a);
  if(a<0)
  {
    printf("%d est négatif.\n", a);
  }
  else if(a>=0)
  {
    printf("%d est positif.\n", a);
  }
  return (0);
}
