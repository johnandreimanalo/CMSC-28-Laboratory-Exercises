// Programming Exercise 03
// Written by: John Andrei Manalo
// This C program implements Queue which has two parts: Queue Implementation & Application
// This program is a systematic checkout system for John's Appetit Restaurant

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 75

// Node structure used to store customer data and link to the next node
struct Node {
    char name[MAXSIZE]; // Name of the customer
    float total_amount; // Total amount payable by the customer
    struct Node* next; // Pointer to the next node in the queue
};

// Structure defining a queue to manage the head and tail
struct Queue {
    struct Node* front; // Pointer to the front of the queue
    struct Node* rear; // Pointer to the rear of the queue
};

// Function to initialize an empty queue
struct Queue INIT() {
    struct Queue queue; // declare a queue structure instance
    // initialize the pointer members to NULL
    queue.front = NULL;
    queue.rear = NULL;
    return queue;
}

// Function to check if the queue is empty
int EMPTY(struct Queue queue) {
    return (queue.front == NULL);
}

// Retrieves the front node of the queue
struct Node* FRONT(struct Queue queue) {
    if (EMPTY(queue))
        return NULL;
    return queue.front;
}

// Function that enqueues a new node at the rear of the queue
void ENQUEUE(struct Node* node, struct Queue* queue) {
    if (!node)
        return;

    node->next = NULL;
    if (EMPTY(*queue)) {
        queue->front = node;
        queue->rear = node;
    } else {
        queue->rear->next = node;
        queue->rear = node;
    }
}

// Dequeues and returns a node from the queue
struct Node* DEQUEUE(struct Queue* queue) {
    if (EMPTY(*queue))
        return NULL;

    struct Node* temp = queue->front;
    queue->front = queue->front->next;
    if (!queue->front)
        queue->rear = NULL;
    return temp;
}

// Clears all nodes in the queue
void MAKENULL(struct Queue* queue) {
    while (!EMPTY(*queue)) {
        struct Node* temp = DEQUEUE(queue);
        free(temp);
    }
}

int main() {
	// Variable Declarations
    int choice; // Store the user's choice from the menu
    struct Queue queue = INIT(); // Initialize the queue as empty
    struct Node* customer_info = NULL; // Pointer to customer information node
    
	// Menu Loop
    while (1) {
    	// Display Menu Options
        printf("\nJOHN'S APPETIT Counter 0:\n\n");
        printf("\t[1] Fall in line\n");
        printf("\t[2] Serve order\n");
        printf("\t[3] Next order\n");
        printf("\t[4] Closing time\n");
        printf("\t[0] Exit\n\n");
		
		// Prompt from user input
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) { // Switch statement to handle user choices
            case 1: {
                customer_info = (struct Node*)malloc(sizeof(struct Node)); // allocating memory for new customer node
                if (customer_info == NULL) {
                    printf("Memory allocation failed.\n");
                    exit(1);
                }
				// getting customer information and enqueueing 
                printf("\nCUSTOMER INFORMATION\n");
                printf("---------------------\n");
                printf("Enter your name: ");
                getchar();
                fgets(customer_info->name, MAXSIZE, stdin);
                customer_info->name[strcspn(customer_info->name, "\n")] = '\0';
                printf("Enter total amount to be paid (PHP): ");
                scanf("%f", &customer_info->total_amount); 

                ENQUEUE(customer_info, &queue);
                break;
            }
            case 2: { // serving an order by dequeueing customer information from the front node
                if (EMPTY(queue)) {
                    printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
                } else {
                    customer_info = DEQUEUE(&queue);
                    printf("\nNow serving %s with total amount payable of %.4f.\n", customer_info->name, customer_info->total_amount); 
                    free(customer_info);
                }
                break;
            }
            case 3: {// Display customer information in the front node
                if (EMPTY(queue)) {
                    printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
                } else {
                    customer_info = FRONT(queue); // Get a copy of the customer information in the front node
                    printf("\nNext order: For customer %s with total amount payable of %.4f.\n", customer_info->name, customer_info->total_amount);
                }
                break;
            }
            case 4: { // Display and remove all customer information from the queue
                if (EMPTY(queue)) {
                    printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
                } else {
                    printf("\nServing all customers left in the queue:\n");
                    while (!EMPTY(queue)) {
                        customer_info = DEQUEUE(&queue);
                        printf("\nNow serving %s with total amount payable of %.4f.\n", customer_info->name, customer_info->total_amount);
                        free(customer_info);
                    }
                    printf("\n");
                    printf("All orders have been served.\n");
                }
                break;
            }
            case 0: { // Exiting the program and deallocate memory used by the program
                MAKENULL(&queue);
                printf("\nThe checkout system has been terminated.\n");
                return 0;
            }
            default: { // Handling invalid inputs
                printf("\nInvalid input. Please try again.\n");
                break;
            }
        }
    }
}

