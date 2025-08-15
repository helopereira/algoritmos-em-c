#include <stdio.h>
#include <stack>
#include <cstring>
using namespace std;

int op_ch(char a){
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '^' || a == '>' || a == '<' || a == '=' || a == '#' || a == '.' || a == '|') return 1;
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) return 2;
    else if (a == '(' || a == ')') return 3;
    else return 0;
}

int check(char a [], int tam){
    for(int i = 0; i < tam; i++){
        if(op_ch(a[i]) == 0) return 1;
    } 
    return 0;
}

int syntaxError(char a [], int tam){
    int p = 0;
    
    if (tam == 1 && (op_ch(a[0]) == 1 || a[0] == '(' || a[0] == ')')) return 1;
    
    for (int i = 0; i < tam; i++){
        if (a[i] == '(' && a[i + 1] == ')') return 1;
        if (a[i] == '(') p++;
        else if (a[i] == ')') {
            if (p <= 0) return 1;
            p--;
        }
        else if (op_ch(a[i]) == 1 && op_ch(a[i + 1]) == 1) return 1;
    }
    
    if (p > 0) return 1;
    
    return 0;
}

int prec(char op){
    if (op == '|') return 1;
    if (op == '.') return 2;
    if (op == '<' || op == '>'|| op == '=' || op == '#') return 3;
    if (op == '+' || op == '-') return 4;
    if (op == '*' || op == '/') return 5;
    if (op == '^') return 6;
    if (op == '(' || op == ')') return -1;
    return 0;
}

void posfix(char a [], int tam){
    char pos[tam];
    stack<char> pilha;
    int paux = 0;
    
    for(int i = 0; i < tam; i++){
        if(prec(a[i]) == 0){
            pos[paux] = a[i]; paux++;
        } else if (a[i] == '('){
            pilha.push(a[i]);
        } else if (a[i] == ')'){
            while(pilha.top() != '(' && !pilha.empty()){
                pos[paux] = pilha.top();
                pilha.pop();
                paux++;
            }
            pilha.pop();
        } else {
            while(!pilha.empty() && prec(pilha.top()) >= prec(a[i])){
                pos[paux] = pilha.top();
                pilha.pop();
                paux++;
            }
            pilha.push(a[i]);
        }
    }
    
    while(!pilha.empty()){
        pos[paux] = pilha.top();
        pilha.pop();
        paux++;
    }
    
    pos[paux] = '\0';
    printf("%s\n", pos);
}

int main(){
    char exp[1000];
    int tam;

    while(scanf("%s", exp) != EOF){
        tam = strlen(exp);
        if (check(exp, tam) == 1) printf("Lexical Error!\n");
        else if (syntaxError(exp, tam) == 1) printf("Syntax Error!\n");
        else posfix(exp, tam);
    }
    
    return 0;
}