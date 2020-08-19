#include<stdio.h>
#include<data_structures.h>

int main(int argc, char **argv){
    // Linked List example
    printf("Linked list example: \n");
    LinkedList list = create_linked_list();
    insert_at_end(&list, 5);
    insert_at_end(&list, 2);
    insert_at_end(&list, 10);
    printf("%d\n", search_element(&list, 2));
    print_linked_list(&list);
    delete(&list, 2);
    print_linked_list(&list);
    delete_at_head(&list);
    printf("%d\n", is_linked_list_empty(&list));

    // Queue example
    printf("\nQueue example: \n");
    Queue queue = create_queue();
    enqueue(&queue, 10);
    enqueue(&queue, 22);
    print_queue(&queue);
    dequeue(&queue);
    print_queue(&queue); 
    return 0;

}