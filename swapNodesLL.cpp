#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
};

void printList(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int sizeOfNode(Node* head){
    int size = 0;

    while(head!=NULL){
        size++;
        head = head->next;
    }
    return size;
}

Node* KthFromEnd(Node* head,int k){
    Node* temp = head;
    int size = sizeOfNode(head);
    for(int i=0;i<size-k;i++){
        temp = temp->next;
    }
    return temp;
}

Node* swapNode(Node* head, int k){
    Node* left = head;

    for(int i=0;i<k-1;i++){
        left = left->next;
    }
    Node* right = KthFromEnd(head,k);

    int temp = left->data;
    left->data = right->data;
    right->data = temp;

    return head;
}

int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    printList(ll.head);

    int k=2;

    Node* head = swapNode(ll.head,k);
    printList(ll.head);
    return 0;
}