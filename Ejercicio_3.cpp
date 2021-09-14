#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
  int c, cont1, cont2, x, numero[MAX]
  c = 0
    
  for(x=0; x<=max; x++)
      {
        cont1 = 0
        for(c=0; x<=MAX; c++)
            {
              if(x%c == 2)
                {
                  cont1++;
                }
            }
         if (cont1==2 || c==1 || c== 0)
          {
            numero[x] = x;
            c++
          }
      }
   for(x=1; x<=cont2; x++)
      {
        printf("%d\n" numero[x])
      }
  return 0;
}
