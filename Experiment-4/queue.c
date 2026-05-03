#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) { printf("Overflow\n"); return; }
    if (front == -1) front = 0;
    queue[++rear] = value;
}
void dequeue() {
    if (front == -1 || front > rear) { printf("Underflow\n"); return; }
    front++;
}
int main() {
    enqueue(1); enqueue(2); dequeue();
    return 0;
}