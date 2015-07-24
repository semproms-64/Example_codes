#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30

typedef struct Stack {
        int capacity;
        int size;
        int *elements;
}Stack;

Stack * createStack(int maxElements) {
        Stack *S;
        S = (Stack *)malloc(sizeof(Stack));
        S->elements = (int *)malloc(sizeof(int)*maxElements);
        S->size = 0;
        S->capacity = maxElements;
        return S; //Pointer to the stack
}
void pop(Stack *S) {
   
        if(S->size==0) {
                printf("Stack is Empty\n");
                return;
        }
        else {
                S->size--;
        }
        return;
}
int top(Stack *S) {
        if(S->size==0) {
                printf("Stack is Empty\n");
                exit(0);
        }
        
        return S->elements[S->size-1];
}

void push(Stack *S,int element) {
       
    if(S->size == S->capacity) {
                printf("Stack is Full\n");
    }
    else {
            
        S->elements[S->size++] = element;
    }
    return;
}


int main(int argc, char const *argv[]) {
	
	Stack *s = createStack(MAX_SIZE);
	int i;

	for (i = 0; i < 21; ++i) {
		push(s,i);
	}

	for (i = 0; i < 21; ++i) {
		pop(s);
		printf("%d\n",top(s));
	}

	return 0;
}