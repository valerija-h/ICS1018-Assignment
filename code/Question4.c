/* Data Structures and Algorithms 1 Assignment
 * Question 4
 * Valerija Holomjova*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Struct that stores information of each node in the BST.
struct node{
    int num; //Value of the node.
    struct node *left; //Points to the left subtree.
    struct node *right; //Points to the right subtree.
};

struct node *insert(struct node *start, int num);
struct node *new (int num);

int main() {
    int num;
    printf("Please enter a sequence of integers or press 'q' to quit.\n");
    //The starting node is defined and set to NULL to avoid bugs.
    struct node *start = NULL;
    //While loop used to scan user input one by one and store it in the BST.
    while(scanf("%d",&num) == 1){
        start = insert(start,num);
    }
}

//Function that inserts the user's inputted value into the BST.
struct node *insert(struct node *start, int num) {
    //cn points to the current node, pn points to the previous node.
    struct node *cn = start, *pn = NULL;
    bool left = false;
    //If the node is empty - creates a node with the user's inputted value and returns it.
    if(start == NULL) {
        return new(num);
    }
    /*If the user's inputted value is larger than the current's node value, insert it into the right subtree.
     * If the user's inputted value is smaller than the current node's value, insert it into the left subtree.*/
    while(cn != NULL) {
        pn = cn;
        if (num >= cn->num) {
            cn = cn->right;
            left = false;
        } else {
            cn = cn->left;
            left = true;
        }
    }
    //To check check if the cn should be pointed to by the pn's left or right subtree.
    if(left == false){
        pn->right = new(num);
    } else {
        pn->left = new(num);
    }
    return start;
}

//Function that creates the actual nodes.
struct node *new (int num) {
    //Allocates memory for a new node and defines it's values.
    struct node *new = (struct node *) malloc(sizeof(struct node));
    new->num = num;
    new->left = NULL;
    new->right = NULL;
    return new;
}
