/*
 Program: Stack using Array
 Language: C
*/
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        top--;
}

int main() {
    push(10);
    push(20);
    pop();
    return 0;
}
