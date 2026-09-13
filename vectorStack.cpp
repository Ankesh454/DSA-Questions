#include <iostream>
#include <vector>
#include <string>
using namespace std;

//create stack using vector
template<class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    T top(){
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return  vec.size() == 0;
    }
};

int main() {
    Stack<string> s;

    s.push("apna college");
    s.push("coding from");
    s.push("learn");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    } 
    cout<<endl;
    return 0;
}