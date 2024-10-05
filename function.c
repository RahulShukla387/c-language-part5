#include<stdio.h>
// For creating a function you need to define it in after stdio and before int main
    // Function prototype 
    int sum(int,int);
    // function definition
    int sum(int x, int y){ //x and y are the parameters
    // printf("the sum of given integer is %d\n",x+y);
     return x+y;
    }
int main(){
    int a = 45;
    int b = 43;
    sum(a,b);
    int a1 = 33;
    int b1 = 22;
    sum(a1,b1);
    sum(55,55); // 55,55 are the arguments
    sum(44,44);
    // calling of a function
    int a2 = 90;
    int b2=80;
    // if you don't use the printf property of fn and you want to just print the individual then you can like
int p = sum(a2,b2);
printf("the sum is %d\n",p);
}