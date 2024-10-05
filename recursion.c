#include<stdio.h>
  // function prototype
  int factorial(int);
  // function definition
  int factorial(int n){
    if(n==1 || n ==0){ //base condition
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
return 0;
  }

int main(){
  int a =7;
  printf("the factorial of %d is %d ",a,factorial(a));
  return 0;

}