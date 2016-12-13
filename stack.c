#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* STACK IN ARRAY
    top adalah tempat kosong paling atas dari data didalam array
    top adalah indeks paling atas + 1
    empty jika top  = 0
    full jika top   = ukuran array
55
************************************************************************/

void stack_init(Stack *s, int cap){
    s->top = 0;
    s->cap = cap;
    s->data = (char*)malloc(sizeof(char) * s->cap);
}

void stack_push(Stack *s, char data){
    if(stack_isfull(s) == 1){
        printf("Stack Penuh\n");
    } else {
        s->data[s->top] = data;
        s->top++;
    }
}

char stack_pop(Stack *s){
    char c;

    if(stack_isempty(s) == 1)
        c ='X';
    else {
        c = s->data[s->top - 1];
        s->top--;
    }

    return c;
}

void stack_print(Stack *s){
    int i;
    printf("Stack :");
    for(i = 0; i < s->top; i++){
        printf(" %c", s->data[i]);
    }
    printf("\n\n");
}

char stack_peek(Stack *s){
    return s->data[s->top-1];

}

int stack_size(Stack *s){
    int size;
    size = s->top;
    return size;
}

int stack_isfull(Stack *s){
    if(s->top == ARRAY_SIZE+1)
        return 1;
    else
        return -1;
}

int stack_isempty(Stack *s){
    if(s->top == 0)
        return 1;
    else
        return -1;
}

void stack_printv(Stack *s){
    int i;

    printf("\nStack:\n  |   |%d <= top\n", s->top);

    for(i = s->top-1 ; i >= 0; i--){
        printf("  | %c |%d\n", s->data[i], i);
    }
    printf("  |___|\n");
}
