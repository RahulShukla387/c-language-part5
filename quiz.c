#include<stdio.h>
// function prototype
void good_morning();
void good_afternoon();
void good_evening();
// function declaration
void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}
int main (){
    // calling function
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}