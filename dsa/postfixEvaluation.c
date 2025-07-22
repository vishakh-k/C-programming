//postfix evaluation

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> // For exit()

#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int postfixEvaluate(char *exp){
    char ch;
    int i;
    int val,op1,op2;
    for(i=0;exp[i]!='\0';i++){
        ch=exp[i];
        if(ch==' '){
            continue;
        }
        if(isdigit(ch)){
            push(ch-'0');
        }else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            op2=pop();
            op1=pop();
            switch(ch){
                case '+':val=op1+op2;
                    break;
                case '-':val=op1-op2;
                    break;
                case '*':val=op1*op2;
                    break;
                case '/':if(op2==0){
                    printf("Not possible");
                }
                val=op1/op2;
            }
            push(val);
        }else{
            printf("Enter a valid choice %c",ch);
        }
    }
    return pop();
}
int main() {
    char postfix[MAX];
    printf("Enter a valid postfix expression: ");
    scanf("%s", postfix);
    int result = postfixEvaluate(postfix);
    printf("Result: %d\n", result);
    return 0;
}
