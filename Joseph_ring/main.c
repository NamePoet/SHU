#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
Node * createList(int n);
int MonkeyKing(int n, int m);
int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    int k = MonkeyKing(n,m);

    printf("%d\n",k);
    return 0;
}

Node * createList(int n)
{
    Node* L = NULL, *tail, *s;

    for (int i=1;i<=n;i++) {
        s = (Node*) malloc(sizeof(Node));
        s -> data = i;
        if (i == 1) {
            L = s;
        } else tail -> next = s;
        tail = s;
    }
    tail -> next = L;

    return tail;
}
int MonkeyKing(int n, int m)
{
    Node *tail = createList(n);

    int count = 1;

    Node *s = tail -> next;
    Node *pre = tail;

    while (s -> next != s) {
        while (count < m) {
            count++;
            pre = s;
            s = s -> next;
        }

        pre -> next = s -> next;
        free(s);
        count = 1;
        s = pre -> next;

    }
    return s -> data;
}