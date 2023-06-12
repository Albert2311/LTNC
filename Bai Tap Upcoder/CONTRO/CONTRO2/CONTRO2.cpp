#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* CreateNode(int init_Data) {
    Node* node = new Node;
    node->data = init_Data;
    node->next = NULL;
    return node;
}
struct List {
    Node* head;
    Node* tail;
};
void CreateList(List& l) {
    l.head = NULL;
    l.tail = NULL;
}
void Addhead(List& l, Node* node) {
    if (l.head == NULL) {
        l.head = node;
        l.tail = node;
    }
    else {
        node->next = l.head;
        l.head = node;
    }
}
void Addtail(List& l, Node* node) {
    if (l.head == NULL) {
        l.head = node;
        l.tail = node;
    }
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
int DeleteK(List& l, int k) {
    int dem = 0;
    Node* pp = l.head;
    Node* p = l.head->next;
    while (p != NULL) {
        if (p->data == k) {
            pp->next = p->next;
            delete p;
            dem++;
            p = pp->next;
        }
        else {
            pp = p;
            p = p->next;
        }
    }
    return dem;
}
int main() {
    int n, k, x;
    cin >> n >> k;
    List l;
    CreateList(l);
    for (int i = 0; i < n; i++) {
        cin >> x;
        Addtail(l, CreateNode(x));
    }
    int dem = DeleteK(l, k);
    if (l.head->data == k) {
        Node* p = l.head;
        l.head = p->next;
        delete p;
        dem++;
    }
    cout << n - dem << endl;
    PrintList(l);
    return 0;
}

// #include <iostream>
// using namespace std;

// struct node {
// 	int data;
// 	node* next;
// };
// struct list {
// 	node* pHead;
// 	node* pTail;
// };
// node* getnode(int x) {
// 	node *p = new node;
// 	p->data = x;
// 	p->next = NULL;
// 	return p;
// }
// void getlist(list& l) {
// 	l.pHead = NULL;
// 	l.pTail = NULL;
// }
// void addfirst(list& l, node* p) {
// 	if (l.pHead == NULL)
// 	    l.pHead = l.pTail = p;
// 	else {
// 		p->next = l.pHead;
// 		l.pHead = p;
// 	}
// }
// void addlast(list& l, node* p) {
// 	if (l.pHead == NULL)
// 	    l.pHead = l.pTail = p;
// 	else {
// 		l.pTail->next = p;
// 		l.pTail = p;
// 	}
// }

// int xoak(list l, int k) {
// 	int dem = 0;
// 	node* pp = l.pHead;
// 	node* p = l.pHead->next;
// 	while (p != NULL) {
// 		if (p->data == k) {
// 			pp->next = p->next;
// 			delete p;
// 			dem ++;
// 			p = pp->next;
// 		}
// 		else {
// 			pp = p;
// 			p = p->next;
// 		}
// 	}
// 	return dem;
// }

// int main() {
// 	int n,k;
// 	cin >> n >> k;
// 	list l;
// 	getlist(l);
// 	int x;
// 	int dem = 0;
// 	for (int i = 0; i < n; i++) {
// 		cin >> x;
// 		addlast(l, getnode(x));
// 	}
// 	dem = xoak(l,k);
// 	if (l.pHead->data == k) {
// 		node* p = l.pHead;
// 		l.pHead = p->next;
// 		delete p;
// 		dem++;
// 	}
// 	cout  <<  n - dem << endl;
// 	for (node* k = l.pHead ; k != NULL ; k = k->next) {
// 		cout << k->data << " ";
// 	}
// 	return 0;
// }