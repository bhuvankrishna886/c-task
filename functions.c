// #include<stdio.h>

// void sum(){
//  int a=5;
//  int b=6;
//  int c=a+b;
//  printf("\n%d",c);   
// }

// int main(){
// printf("hello");
// // function call
// sum();
// }



// passing parameters
// #include<stdio.h>

// void add(int a,int b){ // parameter
//     int c=a+b;
//     printf("%d",c);
// };
// int main(){
// add(5,6);   //passing arguments
// }


// function definition declaration

#include<stdio.h>

// function declare

void sub();

int main(){
    // function call
sub();
}

// function define

void sub(){
    int a=10;
    int b=2;
    int c= a-b;
    printf("%d",c);
}