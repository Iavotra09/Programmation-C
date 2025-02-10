#include<stdio.h>

int main()
{
  int a, b, c;
  printf("Le maximum entre a, b et c\n");
  printf("Entrez a: ");
  scanf("%d", &a);
  printf("Entrez b: ");
  scanf("%d", &b);
  printf("Entrez c: ");
  scanf("%d", &c);
  if (a>b && a>c)
  {
    printf("a est le maximum.\n");
  }
  else if((b>a) && (b>c))
  {
    printf("b est le maximum.\n");
  }
  else
  {
    printf("c est le maximum.\n");
  }
  return (0);
}
