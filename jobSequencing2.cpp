#include <iostream>
#include <vector>
using namespace std;

class Job{
public:
    int idx;
    int deadline;
    int profit;

    Job(int idx, int deadline, int profit){
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};
int maxProfit(vector<pair<int,int>> pairs){
    int n = pairs.size();
    vector<Job> jobs;

    for(int i=0;i<n;i++){
        jobs.emplace_back(i, pairs[i].first, pairs[i].second);
    }

    sort(jobs.begin(),jobs.end(),[](Job &a, Job &b){
        return a.profit > b.profit;
    });

    cout<<"Selecting Job "<<jobs[0].idx<<endl;
    int profit = jobs[0].profit;
    int safeDeadline = jobs[0].deadline + 1;

    for(int i=1;i<n;i++){
        if(jobs[i].deadline >= safeDeadline){
            cout<< "Selecting Job "<<jobs[i].idx<<endl;
            profit += jobs[i].profit;
            safeDeadline++; 
        }
    }
    cout<<"Max profit = "<<profit<<endl;
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