class Solution {
public:
    string removeStars(string str) {
        stack <int> s;
        for(auto i: str){
            if(i == '*')
                s.pop();
            else
                s.push(i);
        }
        string x= "";
        while(!s.empty()){
            x += s.top();
            s.pop();
        } 
        reverse(x.begin(), x.end());
            
        return x; 
    }
};