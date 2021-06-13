/* Data Structures and Algorithms 1 Assignment
 * Question 3 Part 1
 * Valerija Holomjova*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool prime(int num);

int main() {
    int num, i;
    printf("Please input a number to check whether it is prime.\n");
    scanf("%d",&num);
    if(prime(num) == true)
        printf("%d is a prime number.\n",num);
    else
        printf("%d is NOT a prime number.\n",num);
}

//Function that returns true or false based on whether 'num' is prime or not.
bool prime(int num) {
    if(num == 0){
        return false; //if the number is 0, it is not prime.
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0)
                return false; //if the number is divisible by any number between 2 and it's square root, it is not prime.
        }
    }
    return true;
}
