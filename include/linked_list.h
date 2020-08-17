#ifndef LINKED_LIST_H 
#define LINKED_LIST_H

#define True 1
#define False 0

typedef int bool;

typedef struct LinkedListNode {
    int data;
    struct LinkedListNode *next;
} LinkedListNode;

typedef struct LinkedList {
    struct LinkedListNode *head;
} LinkedList;

LinkedList create_linked_list();
int get_linked_list_length(LinkedList *list);
int search_element(LinkedList *list, int value);
void print_linked_list(LinkedList *list);
void insert_at_end(LinkedList *list, int data);
void insert_at_head(LinkedList *list, int data);
void delete(LinkedList *list, int position);
void delete_at_head(LinkedList *list);
bool is_empty(LinkedList *list);

#endif