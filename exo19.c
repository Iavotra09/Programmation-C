#include<stdio.h>

int main()
{
  int a,b, r;
  printf("Savoir si deux nombres sont premiers entre eux ou pas\n");
  printf("Entrez a: ");
  scanf("%d", &a);
  printf("Entrez b: ");
  scanf("%d", &b);
  
  while (r!=0) // calcul du pgcd
  {
    r=a%b;
    a=b;
    b=r;
  }
  
  //premiers entre eux si pgcd=1 or pgcd=a
  if(a==1)
  {
    printf("a et b sont premiers entre eux.\n");
  }
  else
  {
    printf("a et b ne sont pas premiers entre eux.\n");
  }
  return (0);
}
