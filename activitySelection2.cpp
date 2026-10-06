#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int maxActivities(vector<pair<int,int>> activities){
    int count = 1;
    int currEnd = activities[0].second;

    for(int i = 1; i < activities.size(); i++){
        if(activities[i].first >= currEnd){
            count++;
            currEnd = activities[i].second;
        }
    }
    return count;
}

int main() {
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int,int>> activities;

    for(int i = 0; i < start.size(); i++){
        activities.push_back({start[i], end[i]});
    }
    sort(activities.begin(), activities.end(), compare);

    cout<<maxActivities(activities)<<endl;

    return 0;
}