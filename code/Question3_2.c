/* Data Structures and Algorithms 1 Assignment
 * Question 3 Part 2
 * Valerija Holomjova*/

#include <stdio.h>
#include <stdbool.h>
bool prime(int num);

int main() {
    int num, i;
    printf("Please input a number to check whether it is prime.\n");
    scanf("%d",&num);

    if(prime(num) == true) {
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is NOT a prime number.\n",num);
    }
}

//Function that returns true or false based on whether 'num' is prime or not.
bool prime(int num) {
    //If 'num' is 1 it is not considered a prime number.
    if(num == 1) {
     return false;
        //If 'num' is 2,3,5,7 it is a prime number.
    } else if(num == 2 || num == 3 || num == 5 || num == 7) {
        return true;
        //Checks if 'num' is divisible by 2,3,5,7 - implementation of Sieve of Eratosthenes Algorithm.
    } else if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        return false;
    } else {
        return true;
    }
}