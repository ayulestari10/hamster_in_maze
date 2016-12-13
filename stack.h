#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define ARRAY_SIZE 5

/*typedef struct _stack{
    char data[ARRAY_SIZE];
    int top;

} Stack;
*/

typedef struct __struct{
    char *data;
    int top;
    int cap;
} Stack;


void stack_init(Stack *s, int cap);
void stack_push(Stack *s, char data);
char stack_pop(Stack *s);
char stack_peek(Stack *s);
void stack_print(Stack *s);
void stack_printv(Stack *s);

#endif // STACK_H_INCLUDED
