/*
 *
 * display polynomials
 * Using Linked List
 * @author Mridu
 */
 
#include<stdio.h>
#include<stdlib.h>
 
/**
 * The structure for the polynomial
 * This is a linked list with two variable
 * int coeff The Coefficient
 * int pow The power of x
 */
typedef struct link {
    int coeff;
    int pow;
    struct link * next;
} my_poly;
 
/** The prototypes */
void my_create_poly(my_poly **);
void my_show_poly(my_poly *);
void my_add_poly(my_poly **, my_poly *, my_poly *);
 
/**
 * The simple menu driven main function
 */
int main(void) {
    int ch;
    do {
        my_poly * poly1, * poly2, * poly3;
 
        printf("\nCreate 1st expression\n");
        my_create_poly(&poly1);
        printf("\nStored the 1st expression");
        my_show_poly(poly1);
 
        printf("\nCreate 2nd expression\n");
        my_create_poly(&poly2);
        printf("\nStored the 2nd expression");
        my_show_poly(poly2);
 
        my_add_poly(&poly3, poly1, poly2);
        my_show_poly(poly3);
 
        printf("\nAdd two more expressions? ( 1 / 0 ): ");
        scanf("%d", &ch);
    } while (ch=='y'||ch=='Y');
    return 0;
}
 
/**
 * The create polynomial function
 * @param my_poly ** node The pointer to the head of the polynomial
 * We will modify the parameter and will store the base address
 * @return void
 */
void my_create_poly(my_poly ** node) {
    int flag; //A flag to control the menu
    int coeff, pow;
    my_poly * tmp_node; //To hold the temporary last address
    tmp_node = (my_poly *) malloc(sizeof(my_poly)); //create the first node
    *node = tmp_node; //Store the head address to the reference variable
    do {
        //Get the user data
        printf("\nEnter Coeff:");
        scanf("%d", &coeff);
        tmp_node->coeff = coeff;
        printf("\nEnter Pow:");
        scanf("%d", &pow);
        tmp_node->pow = pow;
        //Done storing user data
 
        //Now increase the Linked on user condition
        tmp_node->next = NULL;
 
        //Ask user for continuation
        printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0): ");
        scanf("%d", &flag);
        //printf("\nFLAG: %c\n", flag);
        //Grow the linked list on condition
        if(flag) {
            tmp_node->next = (my_poly *) malloc(sizeof(my_poly)); //Grow the list
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    } while (flag);
}
 
/**
 * The show polynomial function
 * Prints the Polynomial in user readable format
 * @param my_poly * node The polynomial linked list
 * @return void
 */
void my_show_poly(my_poly * node) {
    printf("\nThe polynomial expression is:\n");
    while(node != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if(node != NULL)
            printf(" + ");
    }
}
 
