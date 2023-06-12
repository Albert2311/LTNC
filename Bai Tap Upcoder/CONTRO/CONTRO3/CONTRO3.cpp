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
};
void CreateList(List& l) {
    l.head = l.tail = NULL;
}
void Addhead(List& l, Node* node) {
    if (l.head == NULL)
        l.head = l.tail = node;
    else {
        node->next = l.head;
        l.head = node;
    }
}
void Addtail(List& l, Node* node) {
    if (l.head == NULL)
        l.head = l.tail = node;
    else {
        l.tail->next = node;
        l.tail = node;
    }
}
void PrintList(List& l) {
    if (l.head != NULL) {
        Node* node = l.head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
    }
}
void InsertK(List& l, Node* a, int k, int& n) {
    if (k == 1)
        Addhead(l, a);
    else {
        int i = 1;
        Node* node = l.head;
        while (node != NULL) {
            if (i == k - 1)
                break;
            i++;
            node = node->next;
        }
        a->next = node->next;
        node->next = a;
    }
    n++;
}

int main() {
    int n, a, k, x;
    cin >> n >> a >> k;
    List l;
    CreateList(l);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        Addtail(l, CreateNode(x));
    }
    InsertK(l, CreateNode(a), k, n);
    cout << n << endl;
    PrintList(l);

    return 0;
}


