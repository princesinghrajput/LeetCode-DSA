class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> positives, negatives;
            int n=nums.size();

            for(int i=0; i<n ; i++){
                if(nums[i]>0){
                    positives.push_back(nums[i]);
                } else{
                    negatives.push_back(nums[i]);
                }
            }

            for(int i=0; i<n/2; i++){
                nums[2*i]= positives[i];
                nums[2*i+1] = negatives[i];

            }

            return nums;

        
    }
};