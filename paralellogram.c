#include <stdio.h>
void paralellogram(int no){
  int i,j,k;
  for (i = 0; i < no; i++) {
    for (j = 0; j < no+i; j++)
    printf(" ");
      for (k = 0; k < no; k++)
      printf(" *");
      printf("\n");
  }
}
int main()
{
  int no;
  printf("Enter the size :");
  scanf("%d",&no);
  paralellogram(no);
}
