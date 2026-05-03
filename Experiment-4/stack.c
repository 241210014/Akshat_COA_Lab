    #include <stdio.h>
    #define SIZE 5
    int stack[SIZE];
    int top = -1;

    void push(int value) {
        if (top == SIZE - 1) { printf("Overflow\n"); return; }
        stack[++top] = value;
    }
    void pop() {
        if (top == -1) { printf("Underflow\n"); return; }
        top--;
    }
    int main() {
        push(10); push(20); pop();
        return 0;
    }