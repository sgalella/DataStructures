#include<stdio.h>
#include<stdlib.h>
#include<data_structures.h>

Queue create_queue(){
    Queue *queue = (Queue*)malloc(sizeof(Queue));
    queue->head = NULL;
    return *queue;
}

int get_queue_length(Queue *queue){
    if (queue->head == NULL){
        return 0;
    } else {
        int length = 1;
        ListNode *node = queue->head;
        while (node->next != NULL){
            length++;
            node = node->next;
        }
        return length;
    }
}

void print_queue(Queue *queue){
    ListNode *node;
    printf("[");
    for(node=queue->head; node!=NULL; node=node->next){
        printf(node==queue->head ? "%d" : ", %d", node->data);
    }
    printf("]\n");
}

void enqueue(Queue *queue, int data){
    ListNode *new_node = (ListNode*)malloc(sizeof(ListNode));
    new_node->data = data;
    if (queue->head == NULL){
        queue->head = new_node;
    } else {
        ListNode *node = queue->head;
        while (node->next != NULL){
            node=node->next;
        }
        node->next = new_node;
    }
}

int dequeue(Queue *queue){
    int data = queue->head->data;
    queue->head = queue->head->next;
    return data;
}

bool is_queue_empty(Queue *queue){
    return queue->head == NULL ? True : False;
}
