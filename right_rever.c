#include <stdio.h>
void reverse(int no){
  int i,j,k;
  for (i = 0; i < no; i++) {
    for (j = 0; j < no-i; j++)
    printf("  ");
      for (k = 0; k <i+1; k++)
      printf(" *");
      printf("\n");
  }
  for (int i = 1; i <no; i++) {
    for (int j = 0; j <=i; j++)
    printf("  ");
      for (int k = 0; k <=no-i-1; k++)
      printf(" *");
      printf("\n");
  }
}
int main()
{
  int no;
  printf("Enter the size :");
  scanf("%d",&no);
  reverse(no);
}
