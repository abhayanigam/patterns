#include <stdio.h>
void binary_tri(int no){
  int i,j;
  int count =0;
    for (i = 0; i <=no; i++) {
      for (j = 0; j < i; j++) {
          printf("%d ",count);
          count = !count;
      }
      count = i%2;
      printf("\n");
    }
}
int main()
{
  int no=5;
  binary_tri(no);
}
