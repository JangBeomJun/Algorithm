#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
int push(char ch) {
    if (top >= 100 - 1) return -1;
    return stack[++top] = ch;
}
int pop() {
    if (top < 0) return -1;
    return stack[top--] = '\0';
}
void Result(char *ch, int size) {
    for (int i = 0; i < size; i++) {
        if (ch[i] == '(' || ch[i] == ')' || ch[i] == '[' || ch[i] == ']') {
            if (top == -1) push(ch[i]);
            else {
                if (stack[top] == '('&&ch[i] == ')') pop();
                else if (stack[top] == '['&&ch[i] == ']') pop();
                else push(ch[i]);
            }
        }
    }
    if (top == -1) printf("yes\n");
    else printf("no\n");
}
int main() {
    char str[100];
    while (1){
        top = -1;
        gets(str);
        if (strcmp(str, ".") == 0) return 0;
        Result(str, strlen(str));
    } 
}
