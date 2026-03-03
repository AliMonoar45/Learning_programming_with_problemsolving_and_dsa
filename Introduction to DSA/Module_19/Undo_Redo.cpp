#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    string s = "";
    vector<char> undo;

    while (tc--)
    {
        char ch='\0';
        string command;
        cin >> command;
        if(command== "TYPE"){
            char val;
            cin >> val;
            s.push_back(val);
            undo.clear();
        }else if (command=="UNDO")
        {   
            if(!s.empty()){
                undo.push_back(s.back());
                s.pop_back();
            }
            
        }else if(command == "REDO")
        {
            if(!undo.empty()){

                s.push_back(undo.back());
                undo.pop_back();
            }
        }
        
        
    }
    cout << s;

    return 0;
}