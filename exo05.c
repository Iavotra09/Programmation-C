#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, del, x1, x2 ;
  printf("Résolution d'une équation du second degré\n");
  printf("Entrez a: ");
  scanf("%f", &a);
  printf("Entrez b: ");
  scanf("%f", &b);
  printf("Entrez c: ");
  scanf("%f", &c);
  if((a==0) && (b==0))
  {
    printf("Pas de solution.\n");
  }
  else if ((a==0) && (b!=0))
  {
    x1=-c/b;
    printf("La solution est %f.\n", x1);
  } 
  else 
  {
    del=(b*b)-(4*a*c);
    x1=(-b-sqrt(del))/(2*a);
    x2=(-b+sqrt(del))/(2*a);
    if (del<0)
    {
      x1=-b/(2*a);
      x2=(sqrt(-del))/(2*a);
      printf("Les solutions sont %f-%fi et %f+%fi.\n", x1, x2, x1, x2);
    }
    else if (del==0)
    {
      printf("La solution est %f.\n", x1);
    }
    else
    {
      printf("Les solutions sont %f et %f.\n", x1, x2);
    }
  }
  return (0);
}
