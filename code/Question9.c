/* Data Structures and Algorithms 1 Assignment
 * Question 9
 * Valerija Holomjova*/

#include <stdio.h>

int fib(int n);
int sum(int n);

int main() {
    int n;
    printf("Please enter the nth term.\n");
    scanf("%d",&n);
    printf("The sum of the %d term of the Fibonacci is %d.\n",n,sum(n));
}
//Sums the values of the Fibonacci Sequence up to the nth term.
int sum(int n){
    int sum = 0;
    for(int i=1; i <= n; i++) {
        sum += fib(i);
    }
    return sum;
}

//Function that calculates the value of a fibonacci term.
int fib(int n) {
    //Stopping condition - the first and second Fibonacci Terms are both 1.
    if(n==1 || n==2){
        return 1;
    } else {
        return fib(n-1)+fib(n-2);
    }
}
