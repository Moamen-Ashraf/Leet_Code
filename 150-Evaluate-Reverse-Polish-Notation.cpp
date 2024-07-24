class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;
        for(auto i : tokens){
            if(i == "/" || i == "+" || i == "*" || i == "-"){
                int x = s.top(); s.pop();
                int z = s.top(); s.pop();
                if(i == "*") s.push(x * z);
                else if(i == "/") s.push(z / x);
                else if (i == "+") s.push(x + z);
                else s.push(z - x);
            }
            else
                s.push(stoi(i));
        }
        return s.top();
    }
};