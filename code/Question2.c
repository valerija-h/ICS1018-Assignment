/* Data Structures and Algorithms 1 Assignment
 * Question 2
 * Valerija Holomjova*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void push(double n);
double pop();

double stack[MAX]; //An array representing the stack.
int index = 0; //Keeps track of the top of the stack.

int main() {
    char s[MAX],*tok;
    const char space[2] = " ";
    double x;
    int flag = 0;
    printf("Please input the RPN expression.\n");
    fgets(s,MAX,stdin); //Scans the user's input and stores it in the string 's'.
    tok = strtok(s,space); //Stores the first token of the string 's' in 'tok'.
    while( tok != NULL) {
        if(isdigit(tok[0])) {
            push(atof(tok)); //Pushes the number on top of the stack.
            //The next statements evaluates an expression depending on the operator and pushes it on the stack.
        } else if(tok[0] == '+'){
            push(pop() + pop());
        } else if(tok[0] == '-'){
            x = pop();
            push(pop() - x);
        } else if(tok[0] == '/'){
            x = pop();
            push(pop() / x);
        } else if(tok[0] == '*'){
            push(pop() * pop());
        } else  //Executes if the input isn't a number or operator.
            flag = 1;
        //Stores the remainder tokens of the string 's' in 'tok' until NULL is reached.
        tok = strtok(NULL, space);
    }
    if(flag == 0)
        printf("Final value is %.2lf.", pop());
    else
        printf("Error. Wrong Input.\n");
}

//Function that inserts an element at the top of the stack.
void push(double n){
    stack[index++] = n;
}

//Function that removes an element at the top of the stack.
double pop(){
    return stack[--index];
}