//2D ARRAY

#include<stdio.h>
int main()
{
    int marks[3][4] = {{92,95,95,65}, {74,78,85,55}, {23,34,56,78}};//3 rows and 4 columns 
    printf("\n");
    printf("-------IN MATRIX FORM-------\n");
    printf("\n");
    for(int i=0; i<3; i++)//will run till 0, 1, 2 
    {
        for(int j=0; j<4; j++)//will run till 0, 1, 2, 3 
        {
            printf("%4d", marks[i][j]);//4d(field width specifier) gives suffficient padding between the elements

        }
     printf("\n");//prints a new row from new line
    }
    printf("\n");
    return 0;
}