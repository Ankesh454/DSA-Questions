#include <iostream>
using namespace std;

bool isValid(string s){
    string stack = "";
    for(char c:s){
        if(c=='(' || c=='{' || c=='['){
            stack += c;
        }
        else{
            if(stack.length()==0){
                return false;
            }
            if((c==')' && stack[stack.length()-1]=='(') || (c=='}' && stack[stack.length()-1]=='{') || (c==']' && stack[stack.length()-1]=='[')){
                stack.pop_back();
            }
            else{
                return false;
            }
        }
    }
    return stack.length()==0;
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    cout<<isValid(s)<<endl;
    return 0;
}