#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* int min=0;
  int a;
  printf("pls enter a number:");
  scanf("%d",&a);
  min=a;
  while (a!=0)
  {
   if (a<min)
     min=a;
   else
     min=min;
  scanf("%d",&a);

  }
  printf("%d",min);
  */
  int max=0;
  int a;
  printf("pls enter a number:");
  scanf("%d",&a);
  max=a;
  while (a!=0)
  {
   if (a>max)
     max=a;
   else
     max=max;
  scanf("%d",&a);

  }
  printf("%d",max);
    return 0;
}
