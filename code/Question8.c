/* Data Structures and Algorithms 1 Assignment
 * Question 8
 * Valerija Holomjova*/

#include <stdio.h>
#include <math.h>

float factorial(float num);
double cosine(double cosn, float x, int n);

int main(){
    float num;
    int n;
    printf("Please enter a number to compute cosine.\n");
    scanf("%f",&num);
    printf("Please enter a number of terms.\n");
    scanf("%d",&n);
    printf("The cosine expansion of cos%.0f for %d terms is %.4lf.\n",num,n,cosine(1,num,n));
}

//Function that finds the cosine of a function.
double cosine(double cosn, float x, int n) {
    float numfact = 2; //'numfact' is the denominator of term (without factorial) in series expansion.
    //Calculates the value of cosine by adding 20 terms of McLauren's series expansion.
    for (int i=2; i<n;i++){
        //'i' is the ith term in series expansion. The if statement determines if it is positive or negative.
        if(i % 2 != 0){
            cosn += (pow(x, numfact) / factorial(numfact));
        } else {
            cosn -= (pow(x, numfact) / factorial(numfact));
        }
        numfact += 2;
    }
    return cosn;
}

//Function that finds the factorial of a number.
float factorial(float num) {
    //Stopping condition - the last term in the factorial is 1.
    if(num == 1) {
        return 1;
    } else {
            return num * factorial(num-1);
        }
    }

