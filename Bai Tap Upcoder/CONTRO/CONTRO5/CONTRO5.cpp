#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* CreateNode(int init_data) {
    Node* node = new Node;
    node->data = init_data;
    node->next = NULL;
    return node;
}

struct List {
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }
};
void AddTail(List& l, Node* node) {
    if (l.head == NULL)
        l.head = l.tail = node;
    else {
        l.tail->next = node;
        l.tail = node;
    }
}


int main() {
    int n, x;
    List l;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        AddTail(l, CreateNode(x));
    }
    for (Node* p = l.head; p != NULL; p = p->next) {
        for (Node* pp = l.head; pp != NULL; pp = pp->next) {
            for (Node* ppp = l.head; ppp != NULL; ppp = ppp->next) {
                int a = p->data;
                int b = pp->data;
                int c = ppp->data;
                if (a != b && b != c && a != c) {
                    if (a == b + c) {
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}





