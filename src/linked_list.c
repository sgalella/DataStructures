#include<stdio.h>
#include<stdlib.h>
#include<linked_list.h>

LinkedList create_linked_list(){
    LinkedList *list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    return *list;
}

int get_linked_list_length(LinkedList *list){
    if (list->head == NULL){
        return 0;
    } else {
        int length = 1;
        LinkedListNode *node = list->head;
        while (node->next != NULL){
            length++;
            node = node->next;
        }
        return length;
    }
}

int search_element(LinkedList *list, int value){
    int current_position = 0;
    LinkedListNode *node = list->head;
    while (node != NULL){
        if (node->data == value){
            return current_position;
        }
        node = node->next;
        current_position += 1;
    }
    return -1;
}

void print_linked_list(LinkedList *list){
    LinkedListNode *node;
    printf("[");
    for(node=list->head; node!=NULL; node=node->next){
        printf(node==list->head ? "%d" : ", %d", node->data);
    }
    printf("]\n");
}

void insert_at_end(LinkedList *list, int data){
    LinkedListNode *new_node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    new_node->data = data;
    if (list->head == NULL){
        list->head = new_node;
    } else {
        LinkedListNode *node = list->head;
        while (node->next != NULL){
            node=node->next;
        }
        node->next = new_node;
    }
}

void insert_at_head(LinkedList *list, int data){
    LinkedListNode *new_head = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    new_head->data = data;
    new_head->next = list->head;
    list->head = new_head;
}

void delete(LinkedList *list, int position){
    int length = get_linked_list_length(list);
    if (position == 0){
        delete_at_head(list);
    } else if (position > length - 1){
        fprintf(stderr, "Position Error. Index exceeds list length. \n");
        exit(EXIT_FAILURE);
    } else {
        int current_position = 0;
        LinkedListNode *node = list->head;
        while(current_position != position - 1){
            node=node->next;
            current_position += 1;
        }
        if (length == position + 1){
            node->next = NULL;
        } else {
            node->next = node->next->next;
        }
    }
}

void delete_at_head(LinkedList *list){
    list->head = list->head->next;
}

bool is_empty(LinkedList *list){
    return list->head == NULL ? False : True;
}