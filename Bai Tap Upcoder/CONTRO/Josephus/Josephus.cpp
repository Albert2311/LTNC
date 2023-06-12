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
void Addtail(List& l, Node* node) {
    if (l.head == NULL)
        l.head = l.tail = node;
    else {
        l.tail->next = node;
        l.tail = node;
    }
}
void PrintList(List& l) {
    for (Node* node = l.head; node != NULL; node = node->next)
        cout << node->data << " ";
}

int main() {
    List l;
    int N, M; cin >> N >> M;
    for (int i = 1; i <= N; i++)
        Addtail(l, CreateNode(i));
    Node* ppp = l.head;
    Node* pp = l.tail;
    l.tail->next = l.head;
    int dem = 0;
    while (N > 0) {
        dem++;
        if (dem == M) {
            N--;
            dem = 0;
            cout << ppp->data << " ";
            pp->next = ppp->next;
            delete ppp;
            ppp = pp->next;
            continue;
        }
        pp = ppp;
        ppp = ppp->next;
    }

    // PrintList(l);
    return 0;
}


