// zero or nonzero check
#include<stdio.h>
void zeroNonZeroChecker(int n);
int main(){
    int a;
    scanf("%d",&a);
    zeroNonZeroChecker(a);
    return 0;
}

void zeroNonZeroChecker(int n){
    if(n==0){
        printf("Zero");
    }
    else{
        printf("Non Zero");
    }
}