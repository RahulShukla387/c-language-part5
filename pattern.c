#include<stdio.h>
int main(){
    int i,j;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}