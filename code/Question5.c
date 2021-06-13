/* Data Structures and Algorithms 1 Assignment
 * Question 5
 * Valerija Holomjova*/

#include <stdio.h>
float average(float num1, float num2);
float absolute(float num);
float squareroot(float guess, float num);

int main(){
    float num;
    printf("Please enter a number to approximate it's square root.\n");
    scanf("%f",&num);
    float square = squareroot(1,num);
    printf("The square root of %.3f is %.3f.\n",num,square);
}

//Function that returns a number squared.
float squared(float num) {
    return num * num;
}

//Function that returns the absolute of two numbers.
float average(float num1, float num2) {
    return (num1+num2)/2;
}

//Function that returns the absolute of a number.
float absolute(float num) {
    if(num<0){
        return -num;
    } else {
        return num;
    }
}

//Function that returns the square root of a number.
float squareroot(float guess, float num) {
    /*Checks the accuracy of the current guess.
    If the error percentage of the guess is less than 0.0001, the guess is returned*/
    if(absolute(squared(guess)-num)<0.0001){
        return guess;
    } else {
        //Recalls the function after applying the formula.
        guess = squareroot(average(guess,(num/guess)),num);
    }
    return guess;
}