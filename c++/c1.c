#include <stdio.h>
int main()
{
  int i=1,j=0;

do
{
  printf("%d", j);
i++;
j=i+j;

} while (i<10);

  return 0;
}