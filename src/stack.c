#include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_SIZE 100  
  
// define the structure for the stack  
struct stack {  
    int items[MAX_SIZE];  
    int top;  
};  
  
// function to create an empty stack  
struct stack* createStack() {  
    struct stack* s = malloc(sizeof(struct stack));  
    s->top = -1;  
    return s;  
}  
  
// function to check if the stack is empty  
int isEmpty(struct stack* s) {  
    if (s->top == -1)  
        return 1;  
    else  
        return 0;  
}  
  
// function to check if the stack is full  
int isFull(struct stack* s) {  
    if (s->top == MAX_SIZE - 1)  
        return 1;  
    else  
        return 0;  
}  
  
// function to add an element to the stack  
void push(struct stack* s, int value) {  
    if (isFull(s))  
        printf("Stack is full!");  
    else {  
        s->top++;  
        s->items[s->top] = value;  
    }  
}  
  
// function to remove an element from the stack  
int pop(struct stack* s) {  
    int item;  
    if (isEmpty(s)) {  
        printf("Stack is empty");  
        item = -1;  
    } else {  
        item = s->items[s->top];  
        s->top--;  
    }  
    return item;  
}  
  
int main() {  
    struct stack* s = createStack();  
  
    push(s, 1);  
    push(s, 2);  
    push(s, 3);  
  
    printf("Popped item: %d\n", pop(s));  
    printf("Popped item: %d\n", pop(s));  
    printf("Popped item: %d\n", pop(s));  
  
    return 0;  
}  