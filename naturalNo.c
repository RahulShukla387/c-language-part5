#include<stdio.h>
// function declaration 
int sum(int);
// function definition
int sum(int n){
    if (n==1)
    {
        return 1;/* code */
    }
    else{
    return n+ sum(n-1);
    }
}
int main (){
    int n ;
    printf("enter the value till which you want to sum\n");
    scanf("%d",&n);
    printf("the sum is %d",sum(n));
    return 0;
}