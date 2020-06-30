#include <stdio.h>
void pyramid_reverse(int no){
  int i,j,k;
  for ( i = 0; i < no; i++) {
    for (j = 0; j < i; j++)
    printf(" ");
      for (k = 0; k <no-i; k++)
      printf(" *");
      printf("\n");
  }
}
int main()
{
  int no;
  printf("Enter the size :");
  scanf("%d",&no);
  pyramid_reverse(no);
}
