/* Data Structures and Algorithms 1 Assignment
 * Question 7
 * Valerija Holomjova*/

#include <stdio.h>
//N is the number of elements in the array.
#define N 15
int max(int array[], int n, int x);

int main() {
    int array[N] = {23,6,10,3,50,80,1,76,20,100,120,3,1,45,99};
    printf("The maximum number is %d.\n", max(array, N-1, 0));
}

//Function that finds the maximum number in the array by checking it backwards.
//'n' is the size of the current search space (and which element),'x' is the current maximum.
int max(int array[], int n, int x){
//when 'n' is 0, the last element in the search space (first element of array) is being checked - stopping condition.
    if (n == 0) {
        if(array[n] > x){
            return array[n];
        } else {
            return x;
        }
    }
    //Updates the current maximum and checks the next element.
    if(array[n] > x){
        return max(array, n-1, array[n]);
    } else {
        return max(array, n-1, x);
    }
}