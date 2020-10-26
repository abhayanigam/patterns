#include <stdio.h>
int main()
{
    int row,column;
    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the column :");
    scanf("%d",&column);
    
    for (int i=1; i<=row; i++) {
        for (int j = 1; j<=column; j++) {
            if (i == 1 || i == row || j == 1 || j == column) {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
