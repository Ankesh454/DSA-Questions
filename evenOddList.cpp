//all even numbers appear before all the odd numbers in the modified linked list.
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

Node* oddEvenList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* evenStart = NULL;
    Node* evenEnd = NULL;
    Node* oddStart = NULL;
    Node* oddEnd = NULL;

    Node* curr = head;

    while(curr != NULL){
        if(curr->data % 2 == 0){
            if(evenStart == NULL){
                evenStart = curr;
                evenEnd = curr;
            }else{
                evenEnd->next = curr;
                evenEnd = curr;
            }
        }else{
            if(oddStart == NULL){
                oddStart = curr;
                oddEnd = curr;
            }else{
                oddEnd->next = curr;
                oddEnd = curr;
            }
        }
        curr = curr->next;
    }
    if(evenStart != NULL){
        evenEnd->next = oddStart;
    }
    if(oddEnd != NULL){
        oddEnd->next = NULL;
    }
    if(evenStart != NULL){
        return evenStart;
    }
    return oddStart;
}
int main() {
    List ll;
    ll.push_back(8);
    ll.push_back(12);
    ll.push_back(10);
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(6);

    printList(ll.head);

    Node* head = oddEvenList(ll.head);

    printList(ll.head);

    return 0;
}