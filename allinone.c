#include <stdio.h>
void line_one(int no){
    for (int i=0; i<=no; i++) {
        for (int j = 0; j<i; j++) {
            printf(" *");
        }
        printf("\n");
    }
}
void line_two(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-i-1; j++) {
            printf(" *");
        }
        printf("\n");
    }
}
void line_three(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-i; j++)
            printf(" ");
        for (int k =0; k<no+1; k++)
            printf(" *");
        printf("\n");
    }
}
void line_four(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-i; j++)
            printf(" ");
        for (int k =0; k<i+1; k++)
            printf(" *");
        printf("\n");
    }
}
void line_five(int no){
    for (int i=1; i<no; i++) {
        for (int j=0; j<=i; j++)
            printf(" ");
        for (int k =0; k<no-i; k++)
            printf(" *");
        printf("\n");
    }
}
void line_six(int no){
    for (int i=0; i<no; i++) {
        for (int j=0; j<no-i; j++)
            printf("  ");
        for (int k =0; k<i+1; k++)
            printf(" *");
        printf("\n");
    }
}
void line_seven(int no){
    for (int i=1; i<no; i++) {
        for (int j=0; j<=i; j++)
            printf("  ");
        for (int k =0; k<no-i; k++)
            printf(" *");
        printf("\n");
    }
}
void line_eight(int no){
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
void line_nine(int no){
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
    //printf("Enter the no :");
    //scanf("%d",&no);
    printf("line one\n");
    line_one(no);
    
    line_two(no);
    
    printf("1.Parallelogram\n");
    printf("line three\n");
    line_three(no);
    
    printf("\n");
    
    printf("2.Pyramid\n");
    printf("line four\n");
    line_four(no);
   
    line_five(no);
    
    printf("\n");
    
    printf("line six\n");
    line_six(no);
    
    line_seven(no);
    
    printf("Line eight\n");
    line_eight(no);
    
    printf("Line Nine\n");
    line_nine(no);
}

