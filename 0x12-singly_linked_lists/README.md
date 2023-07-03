<h1> Singly Linked Lists in C </h1>
<h5> Lawal Tajudeen Ogunsola </h5>

A `singly linked list` is a data structure commonly <b>used in computer programming to store and manipulate a collection of elements.</b> </br>In C, a `singly linked list` is implemented <em>using a structure that consists of two parts:</em>
- A `data field` to hold the actual value of an element, and
- A `next pointer` that <em>points to the next node in the list.</em>

<em>Example:</em>
```
/**
 * struct Node - structure type
 * @data_field: 'variable'
 * @nextPtr: 'value'
 */
/* Structure for a node */
struct Node
{
    int data_field;
    struct Node *nextPtr;
};
```

<b> NOTE:</b> Each node in the list contains a value and a next pointer. The value represents the data stored in that particular node, while the next pointer points to the next node in the list. </br>The last node in the list has a next pointer that is set to NULL, indicating the end of the list.

<h4> Singly Linked List Manipulation </h4>
To manipulate a singly linked list in C, you typically need to perform operations such as:

- Inserting a new node.
- Deleting a node.
- Searching for a particular value. and
- Traversing the list.

<b> NOTE: </b> These operations involve updating the next pointers to link the nodes correctly and perform the desired actions.

<b> Example </b>
```
/**
 * insert - function
 * @head: args
 * @data: args
 */
void insert(struct Node** head, int data)
{
    /* Creating a new node */
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data_field;
    newNode->nextPtr = *head;

    /* Updating the head to point to the new node */
    *head = newNode;
}
```
The `insert function` is used to insert a new node at the beginning of the list.
It creates a new node and assigns the given data to it, and updates the next pointer to point to the current head of the list. Then, it updates the head to point to the new node.

```
/**
 * display - struct display
 * @head: 'head args'
 */
void display(struct Node* head)
{
    struct Node* currentNode = head;

    while (currentNode != NULL)
    {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}
```
The `display function` traverses the list starting from the head and prints the data of each node.


```
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
    struct Node* head = NULL;

    /* Insert elements into the list */
    insert(&head, 3);
    insert(&head, 7);
    insert(&head, 9);
    insert(&head, 2);

    /* Display the list */
    printf("Linked list: ");
    display(head);

    return 0;
}
```

Singly linked lists are useful when you need `dynamic memory allocation` and `efficient insertion and deletion operations` at the beginning or end of the list. However, <b>they have limitations,</b> such as
- Slower searching compared to other data structures like arrays or doubly linked lists, since you need to traverse the list sequentially to find a specific element.


Conclusively, a `singly linked list` in C provides a flexible and efficient way to store and manipulate a collection of elements, allowing for dynamic memory allocation and various operations on the list.

<h6> ALX SE </h6>
