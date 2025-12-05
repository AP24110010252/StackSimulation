#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Check functions
int isFull()  { return top == MAX - 1; }
int isEmpty() { return top == -1; }

// Push operation
void push(int x) {
    if (isFull()) {
        printf("Stack is Full! Cannot insert.\n");
        return;
    }
    stack[++top] = x;
    printf("%d pushed into stack.\n", x);
}

// Pop operation
void pop() {
    if (isEmpty()) {
        printf("Stack is Empty! Nothing to remove.\n");
        return;
    }
    printf("%d popped from stack.\n", stack[top--]);
}

// Display stack
void display() {
    if (isEmpty()) {
        printf("Stack is Empty.\n");
        return;
    }
    printf("Stack Elements: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n===== STACK SIMULATION =====\n");
        printf("1. Push Element\n");
        printf("2. Pop Element\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting simulation.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}