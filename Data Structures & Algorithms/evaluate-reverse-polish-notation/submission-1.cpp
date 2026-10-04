class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        int i =0;
        while(i< tokens.size()){
            if(tokens[i]=="-"){
                int x = stoi(s.top());
                s.pop();
                int y = stoi(s.top());
                s.pop();
                int z = y-x;
                s.push(to_string(z));
            }
             else if(tokens[i]=="+"){
                int x = stoi(s.top());
                s.pop();
                int y = stoi(s.top());
                s.pop();
                int z = x+y;
                s.push(to_string(z));
            }
             else if(tokens[i]=="/"){
                int x = stoi(s.top());
                s.pop();
                int y = stoi(s.top());
                s.pop();
                int z = y/x;
                s.push(to_string(z));
            }
             else if(tokens[i]=="*"){
                int x = stoi(s.top());
                s.pop();
                int y = stoi(s.top());
                s.pop();
                int z = x*y;
                s.push(to_string(z));
            }
            else{
                s.push(tokens[i]);
            }
            i++;
        }
 return stoi(s.top());   }
};
