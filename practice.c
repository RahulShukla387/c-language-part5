// #include<stdio.h>
// // prototype of function
// int average(int,int,int);
// //fuction definition
// int average(int x , int y , int z){
//    int average = (x+y+z)/3;
//    printf("The average of given no is %d",average);
// }
// int main(){
// average(5,4,3);
// }

// Program to convert celsius into fahreinheight
#include<stdio.h>
int main(){
   float celcius;
   printf("enter the temperature in celsius\n");
   scanf("%f",&celcius);
     float fahreinheight =((9*celcius)/5 +32);
   printf("the temperature in fahreinheight is %f",fahreinheight);
}