#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

string decodeString(string str){
    stack<int> n;
    stack<string> s;

    int num = 0;
    string curr = "";

    for(char ch : str){

        if(isdigit(ch)){
            num = num * 10 + (ch - '0');
        }else if(ch == '['){
            n.push(num);
            s.push(curr);

            num = 0;
            curr = "";
        }else if(ch == ']'){
            int repeat = n.top();
            n.pop();

            string prev = s.top();
            s.pop();

            string temp = "";

            for(int i = 0; i < repeat; i++){
                temp = temp + curr;
            }

            curr = prev + temp;
        }else{
            curr += ch;
        }
    }
    return curr;
}

int main() {
    string str;

    cout << "Enter encoded string: ";
    cin >> str;

    string ans = decodeString(str);

    cout << "Decoded string: " << ans << endl;

    return 0;
}