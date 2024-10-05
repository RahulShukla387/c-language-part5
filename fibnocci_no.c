#include<stdio.h>
// function prototype
 int fabnocci(int);
 // function definition 
 int fabnocci(int x){
   
 if(x==1 || x==2){
return x-1;
}
else{
    return fabnocci(x-1) + fabnocci(x-2);
}
}
int main(){
    int n;
     printf("enter the no of which you want to print the fabnocci");
    scanf("%d",&n);
    // fabnocci(1);
    printf("the fabnocci no are %d",fabnocci(n)); 
}