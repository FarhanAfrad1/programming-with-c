// 1.zero or nonzero check

// 2.In this problem you will be given an integer number N.
//  You will have to add 5 with N and print it.

// 3.In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. 
// (a is the multiple of b or b is the multiple of a). 

// 4.In this problem you will be given a floating point number x. 
// You have to print x upto 3 decimal points.
#include<stdio.h>
void zeroNonZeroChecker(int n);
void add5WithGivenNumber(int n);
void checkMultiple(int n,int m);
void controlDecimalInFloatNumber(float n);
int main(){
    int a,b;
    float c;
    // this is for problem 1
    // scanf("%d",&a);
    // this is for problem 2
    // scanf("%d",&a);
    // zeroNonZeroChecker(a);
    // add5WithGivenNumber(a);
    // this is for problem 3
    // scanf("%d %d",&a,&b);
    // checkMultiple(a,b);
    // this is for problem 4
    scanf ("%f",&c);
    controlDecimalInFloatNumber(c);
    return 0;
}

void zeroNonZeroChecker(int n){
    if(n==0){
        printf("Zero\n");
    }
    else{
        printf("Non Zero\n");
    }
}
void add5WithGivenNumber(int n){
    printf("%d\n", n+5);
}

void checkMultiple(int n,int m){
    if(n%m==0 || m%n==0){
       printf("Yes\n"); 
    }
    else{
        printf("No\n");
    }
}

void controlDecimalInFloatNumber(float n){
    printf("%.3f",n);
}