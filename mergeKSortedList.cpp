#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = NULL;
    }
};

ListNode* mergeTwoList(ListNode* ll1, ListNode* ll2){
    ListNode* temp = new ListNode(-1);
    ListNode* ptr = temp;

    while(ll1 != NULL && ll2 != NULL){
        if(ll1->val <= ll2->val){
            ptr->next = ll1;
            ll1 = ll1->next;
        }else{
            ptr->next = ll2;
            ll2 = ll2->next;
        }
        ptr = ptr->next;
    }
    if(ll1 != NULL){
        ptr->next = ll1;
    }else{
        ptr->next = ll2;
    }

    return temp->next;
}

ListNode* mergeKLists(vector<ListNode*> & lists){

    if(lists.size() == 0){
        return NULL;
    }

    ListNode* ans = lists[0];

    for(int i=1;i<lists.size();i++){
        ans = mergeTwoList(ans,lists[i]);
    }
    return ans;
}

void printList(ListNode* head) {

    while (head != NULL) {
        cout << head->val << "->";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {
    ListNode* ll1 = new ListNode(1);
    ll1->next = new ListNode(3);

    ListNode* ll2 = new ListNode(6);
    ll2->next = new ListNode(8);

    ListNode* ll3 = new ListNode(9);
    ll3->next = new ListNode(10);
 
    vector<ListNode*> lists;
    lists.push_back(ll1);
    lists.push_back(ll2);
    lists.push_back(ll3);
    
    ListNode* ans = mergeKLists(lists);
    printList(ans);

    return 0;
}