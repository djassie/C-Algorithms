/**
 * queue should be created on the client program
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node node;

struct node {
  int data;
  node *next;
};

typedef struct {
  node *front;
  node *rear;
  int size;
} queue;

node *createNode(int d) {
  node *tempNode = (node *)malloc(sizeof(node));
  tempNode->next = NULL;
  tempNode->data = d;

  return tempNode;
}

void push(queue *q, int d) {
  if (q->front == NULL) {
    node *nnode = createNode(d);
    q->front = nnode;
    q->rear = nnode;
    q->size += 1;
  } else {
    node *nnode = createNode(d);
    node *last = q->rear;
    last->next = nnode;
    q->rear = nnode;
    q->size += 1;
  }
}

void pop(queue *q) {
  if (q != NULL) {
    node *nn = q->front;
    node *nNext = nn->next;
    q->front = nNext;
    q->size -= 1;
    // free(nn);
    // nn = NULL;    
  }
}

int empty(queue *q) {
  return q->size == 0;
}

int size(queue *q) {
  return q->size;
}

node *front(queue *q) {
  return q->front;
}

node *back(queue *q) {
  return q->rear;
}

int main() {
  queue *qq = (queue *)malloc(sizeof(queue));

  push(qq, 4);
  push(qq, 7);
  push(qq, 5);
  // push(qq, 8);
  push(qq, 1);
  push(qq, 6);
  push(qq, 5);
  push(qq, 5);

  while (!empty(qq)) {
    printf("%d\n", front(qq)->data);
    pop(qq);
  }
  //free(qq)
  //qq = NULL
  return 0;
}