// relational operator 
// >(less than),<(greater than),>=(greater or equal),<=(less or equal),==(equals to),!=(not equals to)
// logical operator
// &&(logical and),||(logical or),!(logical not)

// these operator are main used in conditional statement

// Take a number from user and check if its a even number or odd number.
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2 == 0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    return 0;
}

