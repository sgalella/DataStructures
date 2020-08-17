#include<stdio.h>
#include<linked_list.h>

int main(int argc, char **argv){
    // Linked List example
    LinkedList list = create_linked_list();
    print_linked_list(&list);
    printf("%d\n", is_empty(&list));
    insert_at_end(&list, 5);
    insert_at_end(&list, 2);
    insert_at_end(&list, 10);
    insert_at_end(&list, 15);
    insert_at_head(&list, 22);
    print_linked_list(&list);
    delete(&list, 2);
    print_linked_list(&list);
    delete_at_head(&list);
    print_linked_list(&list);
    delete(&list, 0);
    print_linked_list(&list);
    printf("%d\n", search_element(&list, 15));
    return 0;

}