#include <iostream>
#include <vector>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int,int>> jobs){
    sort(jobs.begin(), jobs.end(),compare);

    int profit = jobs[0].second;
    int safeDeadline = jobs[0].first + 1;

    for(int i=1;i<jobs.size();i++){
        if(jobs[i].first >= safeDeadline){
            profit += jobs[i].second;
            safeDeadline++;
        }
    }
    cout<<"Max profit from jobs = "<<profit<<endl;
    return profit;
}

int main() {
    int n=4;

    vector<pair<int,int>> jobs(n,make_pair(0,0));

    for(int i=0;i<n;i++){
        int deadline, profit;
        cout<<"Deadline\n";
        cin>>deadline;
        cout<<"Profit\n";
        cin>>profit;
        jobs[i] = make_pair(deadline,profit);
    }
    maxProfit(jobs);
    return 0;
}