#include <iostream>
#include <vector>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int eraseOverlapIntervals(vector<vector<int>>& intervals){
    vector<pair<int,int>> p;

    for(int i = 0; i < intervals.size(); i++){
        p.push_back({intervals[i][0], intervals[i][1]});
    }

    sort(p.begin(), p.end(), compare);

    int overlap = 0;
    int currEnd = p[0].second;

    for(int i = 1; i < p.size(); i++){
        if(p[i].first >= currEnd){
            currEnd = p[i].second;
        }else{
            overlap++;
        }
    }
    return overlap;
}

int main() {
    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};

    int ans = eraseOverlapIntervals(intervals);
    cout << "Minimum intervals to remove: " << ans << endl;
    return 0;
}