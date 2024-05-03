				   a
#include <stdio.h>

#define MAX_BUFFER_SIZE 10

int buffer[MAX_BUFFER_SIZE];
int in = 0;
int out = 0;

void produce() {
    int produce;
    if ((in + 1) % MAX_BUFFER_SIZE == out) {
        printf("\nBuffer is Full");
    } else {
        printf("\nEnter the value: ");
        scanf("%d", &produce);
        buffer[in] = produce;
        in = (in + 1) % MAX_BUFFER_SIZE;
    }
}

void consume() {
    if (in == out) {
        printf("\nBuffer is Empty");
    } else {
        int consume = buffer[out];
        printf("\nThe consumed value is %d", consume);
        out = (out + 1) % MAX_BUFFER_SIZE;
    }
}

int main() {
    int choice = 0;
    while (choice != 3) {
        printf("\n1. Produce \t 2. Consume \t 3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                produce();
                break;
            case 2:
                consume();
                break;
            case 3:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice! Please enter 1, 2, or 3.");
        }
    }
    return 0;
}
