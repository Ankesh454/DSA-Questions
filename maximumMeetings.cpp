#include <iostream>
using namespace std;
bool compare(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    return a.first.second < b.first.second;
}

vector<int> maxMeetings(vector<int> &s, vector<int> &f){
    vector<pair<pair<int,int>,int>> meetings;

    for (int i = 0; i < s.size(); i++){
        meetings.push_back({{s[i], f[i]}, i + 1});
    }

    sort(meetings.begin(), meetings.end(), compare);

    vector<int> idx;
    int currEnd = meetings[0].first.second;

    idx.push_back(meetings[0].second);

    for (int i = 1; i < s.size(); i++){
        if (meetings[i].first.first > currEnd){
            idx.push_back(meetings[i].second);
            currEnd = meetings[i].first.second;
        }
    }

    sort(idx.begin(), idx.end());
    return idx;
}
int main() {
    vector<int> s = {1, 3, 0, 5, 8, 5};
    vector<int> f = {2, 4, 6, 7, 9, 9};

    vector<int> ans = maxMeetings(s, f);

    cout<<"Selected meeting indices: ";

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}