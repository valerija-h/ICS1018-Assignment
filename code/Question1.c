/* Data Structures and Algorithms 1 Assignment
 * Question 1
 * Valerija Holomjova*/

#include <stdio.h>
//N is the number of elements in the array.
#define N 7
void pairs(int num);

int main() {
    //Initializing an array with N elements.
    int ar[N] = {1,2,24,120,450,876,1016};

    //Finds the pairs of each number in the array using the pairs() function.
    for(int i = 0; i < N; i++) {
        pairs(ar[i]);
    }
}

//Function that finds the pair of any given number passed as 'num'.
void pairs (int num) {
    int found = 0; //The number indicates how many pairs were found eg. 0=0 pairs found.
    int a = 0, b = 0, c = 0, d = 0;
    int i,j;

    //The For loops scan for factors of the product 'num' up to a value of 1024.
    for(i=0; i<1024; i++) {
        for(j=0; j<1024; j++) {
            //If statement checks whether two numbers in the search space are factors of 'num' and are not equal.
            if(((i*j) == num) && (i!=j)) {
                    //Executes if a and b haven't been found yet.
                    if(a==0 && b==0) {
                        a = i;
                        b = j;
                        found = 1;
                        //Executes if c and d haven't been found yet.
                    } else if (c==0 && d==0) {
                        //If statement checks that i and j are not the same as a and b.
                        if((a!=i) && (a!=j) && (b!=i) && (b!=j)) {
                            c = i;
                            d = j;
                            found = 2;
                        }
                    }
                }
            }
        }

    //Illustrates which pairs that were found for 'num'.
    if(found == 0) {
        printf("No pairs were found for the product %d.\n", num);
    } else if (found == 1) {
        printf("Only one pair of integers have the product %d: \n", num);
        printf("%d * %d = %d \n", a, b, num);
    } else if (found == 2) {
        printf("The two pairs of integers that have the same product %d are: \n", num);
        printf("%d * %d = %d \n", a, b, num);
        printf("%d * %d = %d \n", c, d, num);
    }
}