#include <stdio.h>
void pyramid(int no){
  int i,j,k;
  for ( i = 0; i <no; i++) {
      for (j = 0; j < no-i; j++)
      printf(" ");
      for (k = 0; k < i+1; k++)
      printf(" *");
      printf("\n");
}
}
int main()
{
  int no;
  printf("Enter the size :");
  scanf("%d",&no);
  pyramid(no);
}
