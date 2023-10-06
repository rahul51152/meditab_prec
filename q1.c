//Given a parentheses string, return the minimum number of parentheses we must add to make 
//the resulting string valid.
//Ex 1. Input :- “()))((”
// Output :- 4
#include <stdio.h>
#include <string.h>

int Valid(char *s) {
    int openCount = 0;
    int addCount = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            openCount++;
        } else if (s[i] == ')') {
            if (openCount > 0) {
                openCount--;
            } else {
                addCount++;
            }
        }
    }
    addCount += openCount;

    return addCount;
}

int main() {
    char a[] = "()))(()";
    int b = Valid(a);
    printf("%d\n", b); 
    return 0;
}

