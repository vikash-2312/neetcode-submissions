class Solution {
public:

int helper(int n ){
    int sum =0;
    while(n>0){
       sum = sum + (n % 10) * (n % 10);
        n= n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        set<int>st;
       while(n != 1 && st.find(n) ==st.end()){
        st.insert(n);
        n= helper(n);
       
       }
        if(n ==1){
            return true;
        }
        
  return false;  }
};
