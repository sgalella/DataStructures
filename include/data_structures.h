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

LinkedList create_linked_list();
int get_linked_list_length(LinkedList *list);
int search_element(LinkedList *list, int value);
void print_linked_list(LinkedList *list);
void insert_at_end(LinkedList *list, int data);
void insert_at_head(LinkedList *list, int data);
void delete(LinkedList *list, int position);
void delete_at_head(LinkedList *list);
bool is_linked_list_empty(LinkedList *list);

#endif