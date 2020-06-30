#include <stdio.h>
void arrow_up(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-i; j++)
            printf(" ");
        for (int k=0; k<i+1; k++)
            printf(" *");
        printf("\n");
    }
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-2; j++)
            printf(" ");
        for (int k =0; k<no-2; k++)
            printf(" *");
            printf(" \n");
    }
}
void arrow_down(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-2; j++)
            printf(" ");
        for (int k =0; k<no-2; k++)
            printf(" *");
            printf(" \n");
    }
    for (int i=0; i<no; i++) {
        for (int j=0; j<=i; j++)
            printf(" ");
        for (int k =0; k<no-i; k++)
            printf(" *");
        printf("\n");
    }
}
int main()
{
  int no=5;
    arrow_up(no);
    arrow_down(no);
}
