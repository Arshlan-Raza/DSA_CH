#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int digit;
    struct node *next;
};

// Function prototypes
struct node *create_linked_list(int);
void display_linked_list(struct node *);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    // Create linked list from the input number
    struct node *head = create_linked_list(num);

    // Display the linked list
    printf("Linked List: ");
    display_linked_list(head);

    return 0;
}

// Function to create a linked list from an integer
struct node *create_linked_list(int num)
{
    struct node *head = NULL;
    int digit;

    // Special case for handling input number 0
    if (num == 0)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->digit = 0;
        new_node->next = NULL;
        head = new_node;
        return head;
    }

    // Extract digits from input number and store in linked list
    while (num != 0)
    {
        digit = num % 10; // Extract the last digit
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->digit = digit;
        new_node->next = head; // Insert at the beginning of the list
        head = new_node;

        num /= 10; // Remove the last digit
    }

    return head;
}

// Function to display the linked list
void display_linked_list(struct node *head)
{
    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d    ", ptr->digit);
        ptr = ptr->next;
    }

    printf("\n");
}
