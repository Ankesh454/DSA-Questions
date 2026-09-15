#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

bool isPalindrome(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    stack<int> s;
    temp = head;

    for(int i = 0;i<len/2;i++){
        s.push(temp->val);
        temp = temp->next;
    }

    if(len % 2 != 0){
        temp = temp->next;
    }

    while(temp != NULL){
        if(s.top() != temp->val){
            return false;
        }
        s.pop();
        temp = temp->next;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = sizeof(arr)/sizeof(int);

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    cout<<isPalindrome(head)<<endl;
    return 0;
}