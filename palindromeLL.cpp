#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int x){
        val=x;
        next=NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
};

bool isPalindrome(Node* head){
    if(head==NULL || head->next==NULL) return true;

    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast && fast->next){
        fast=fast->next->next;

        Node* temp=slow->next;
        slow->next=prev;
        prev=slow;

        slow=temp;
    }

    if(fast){
        slow=slow->next;
    }

    while(prev && slow){
        if(prev->val!=slow->val){
            return false;
        }

        prev=prev->next;
        slow=slow->next;
    }

    return true;
}

int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(1);

    cout<<isPalindrome(ll.head)<<endl;

    return 0;
}