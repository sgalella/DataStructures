#ifndef DATA_STRUCTURES_H 
#define DATA_STRUCTURES_H

#define True 1
#define False 0

typedef int bool;

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

typedef struct LinkedList {
    struct ListNode *head;
} LinkedList;

typedef LinkedList Queue;
typedef LinkedList Stack;

LinkedList create_linked_list();
int get_linked_list_length(LinkedList *list);
int search_element(LinkedList *list, int value);
void print_linked_list(LinkedList *list);
void insert_at_end(LinkedList *list, int data);
void insert_at_head(LinkedList *list, int data);
void delete(LinkedList *list, int position);
void delete_at_head(LinkedList *list);
bool is_linked_list_empty(LinkedList *list);

Queue create_queue();
int get_queue_length(Queue *queue);
void print_queue(Queue *queue);
void enqueue(Queue *queue, int data);
int dequeue(Queue *queue);
bool is_queue_empty(Queue *queue);

Stack create_stack();
int get_stack_length(Stack *stack);
void print_stack(Stack *stack);
void push(Stack *stack, int data);
int pop(Stack *stack);
bool is_stack_empty(Stack *stack);

#endif