class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int zero =0;
        int product=1;
        for(int i =0;i<nums.size() ;i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                product = product*nums[i];
            }
            
        }
        int n = nums.size();
        vector<int>ans(n,0);
        if(zero>1){
            return ans;
        }
        if(zero==1){
            for(int i =0 ; i<nums.size() ;i++){
                if(nums[i]==0){
                    ans[i]=product;
                }
            }
            return ans;
        }

        for(int i =0 ; i<ans.size();i++){
            ans[i] = product/nums[i];
        }

 
  return ans;  }
};
