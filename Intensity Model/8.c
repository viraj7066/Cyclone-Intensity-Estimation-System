#include<stdio.h>

int main() {
    int queue[20], n, head, i, j, seek = 0, max, diff;
    float aver;

    printf("Enter the max range of disk: ");
    scanf("%d", &max);

    printf("Enter the size of queue request: ");
    scanf("%d", &n);

    printf("Enter the queue: ");
    for (i = 1; i <= n; i++) {
        scanf("%d", &queue[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    queue[0] = head;

    for (j = 0; j < n; j++) {
        diff = abs(queue[j + 1] - queue[j]);
        seek += diff;
        printf("Move is from %d to %d with seek %d\n", queue[j], queue[j + 1], diff);
    }

    printf("Total seek time is %d\n", seek);

    aver = seek / (float)n;
    printf("Average seek time is %f\n", aver);

    return 0;
}
