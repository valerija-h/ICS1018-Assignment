/* Data Structures and Algorithms 1 Assignment
 * Question 6
 * Valerija Holomjova*/

#include <stdio.h>
//N is the number of elements in the array.
#define N 15
int main(){
    int array[N] = {1,1,5,4,3,9,9,100,45,45,3,4,1,2,5};
    printf("The following numbers are repeated more than once:\n");

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            //If the element is repeated in the array, and not null (already been found).
            if((array[i] == array[j]) && (array[i] != '\0')) {
                //Prints the element that has been repeated.
                printf("%d ",array[i]);
                for (int k = j; k < N; k++) {
                    //Sets all the elements of same value in array to null including itself.
                    if(array[k] == array[i]) {
                        array[k] = '\0';
                    }
                }
            }
        }
    }
}