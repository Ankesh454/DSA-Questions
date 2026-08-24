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

Node* deleteN_Node(Node* head,int m,int n){
    Node* temp = head;

    while(temp != NULL){

        for(int i = 1;i < m && temp != NULL;i++){
            temp = temp->next;
        }

        if(temp == NULL){
            break;
        }

        Node* curr = temp->next;

        for(int i = 1;i <= n && curr != NULL;i++){
            Node* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
        temp->next = curr;

        temp = curr; 
    } 
    return head;
}

int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    printList(ll.head);

    int m = 2;
    int n = 2;

    ll.head = deleteN_Node(ll.head, m, n);

    printList(ll.head);
    return 0;
}