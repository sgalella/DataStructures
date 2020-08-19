#include<stdio.h>
#include<stdlib.h>
#include<data_structures.h>

Stack create_stack(){
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->head = NULL;
    return *stack;
}

int get_stack_length(Stack *stack){
    if (stack->head == NULL){
        return 0;
    } else {
        int length = 1;
        ListNode *node = stack->head;
        while (node->next != NULL){
            length++;
            node = node->next;
        }
        return length;
    }
}

void print_stack(Stack *stack){
    ListNode *node;
    printf("[");
    for(node=stack->head; node!=NULL; node=node->next){
        printf(node==stack->head ? "%d" : ", %d", node->data);
    }
    printf("]\n");
}

void push(Stack *stack, int data){
    ListNode *new_node = (ListNode*)malloc(sizeof(ListNode));
    new_node->data = data;
    if (stack->head == NULL){
        stack->head = new_node;
    } else {
        ListNode *node = stack->head;
        while (node->next != NULL){
            node=node->next;
        }
        node->next = new_node;
    }
}

int pop(Stack *stack){
    int data = stack->head->data;
    stack->head = stack->head->next;
    return data;
}

bool is_stack_empty(Stack *stack){
    return stack->head == NULL ? True : False;
}
