#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push_front(Node* &head, int data){
    Node* nodo = new Node;
    nodo->data = data;
    nodo->next = head;
    head = nodo;
}

void display(Node* head){
    for (Node* temp = head; temp != nullptr; temp = temp->next)    
        cout<<temp->data<<"->";
    cout<<"null\n";   
}

///////////////////////////////////////////////////
void push_back(Node* &head, int data){
   //TODO
    throw ("Falta implementar");
}

Node* SortedMerge(Node* l1, Node* l2) {//O(n + m)
   //TODO
   throw ("Falta implementar");
}

Node* Intersect(Node* l1, Node* l2) {//O(n + m)
   //TODO
   throw ("Falta implementar");
}

void SortedInsert(Node* &head, int data){//O(n^2)
 //TODO
 throw ("Falta implementar");
}