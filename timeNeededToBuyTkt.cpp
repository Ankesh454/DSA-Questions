#include <iostream>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    queue<int> q;

    for(int i=0; i<tickets.size();i++){
        q.push(i);
    }

    int time = 0;

    while(!q.empty()){

        int person = q.front();
        q.pop();

        tickets[person]--;
        time++;

        if(person == k && tickets[person] == 0){
            return time;
        }

        if(tickets[person]>0){
            q.push(person);
        }
    }
    return time;
}

int main() {
    vector<int> tickets = {1,3,2};
    int k=2;

    cout<<timeRequiredToBuy(tickets,k)<<endl;
    return 0;
}