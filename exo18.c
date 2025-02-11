#include<stdio.h>

int main()
{
  int a,b, r;
  printf("Calcul du pgcd de a et b\n");
  printf("Entrez a: ");
  scanf("%d", &a);
  printf("Entrez b: ");
  scanf("%d", &b);
  while (r!=0) // algorithme d'Euclide, le pgcd est le dernier reste non nul
  {
    r=a%b;
    a=b;
    b=r;
  }
  //b a pris la valeur du dernier reste non nul qui est le pgcd, or a<-b donc pgcd =a
  printf("Le PGCD est %d.\n", a);
  return (0);
}
