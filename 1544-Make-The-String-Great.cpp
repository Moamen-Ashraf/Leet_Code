class Solution {
public:
    string makeGood(string st) {
       stack <char> s;
       for(auto i : st){
            if(!s.empty() && s.top() != i && (tolower(s.top()) == tolower(i)))
                s.pop();
            else
                s.push(i);    
       } 
       string str = "";
       while(!s.empty()){
            str += s.top();
            s.pop();
       }
       reverse(str.begin(), str.end());
       return str;
    }
};