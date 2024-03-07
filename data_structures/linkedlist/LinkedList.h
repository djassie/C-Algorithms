/**
 * Singly Linkedlist with integer values
 * 
 * For Singly Linkedlist with char, or linkedlist with srtuct (likedlist of Employees) refer extras folder
*/
typedef struct node node;

struct node{
  int data;
  node *next;
};

/**
 * Linkedlist(singly or doubly) is basically data structure with pointer to next object, 
 * where list structure is not necessary, while on formal definition, the list is added. 
 * 
 * The only purpose of list, is to hold the first or address of head node(pointer). For every operation the pointer to the list is what required. 
 * 
*/

typedef struct{
  node *head;
}list;

/**
 * Adding or creating node
*/

void appendNode(int n, list *l);

/**
 * Linkedlist from int nums[] array
*/
void appendArray(int *nums, int size, list *l);

/**
 * Apending to Nth position of linkedlist
*/
void appendN(int n, int position, list *l);

/**
 * Prepend at head
*/
void prependHead(int n, list *);

/**
 * delete from end
*/
void deleteEnd(list *l);

/**
 * delete Nth node
*/
void deleteN(int n, int position, list *l);

/**
 * print nodes
*/
void printNode(list *l);