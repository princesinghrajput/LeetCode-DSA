class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0, rSum=0;
        int n= cardPoints.size();

        for(int i=0;i<k;i++){
            lSum=lSum+cardPoints[i];

        }

        int maxSum=lSum;
        int rIndex=n-1;

        for(int i=k-1; i>=0; i--){
            lSum=lSum-cardPoints[i];
            rSum=rSum+cardPoints[rIndex];
            rIndex--;
            maxSum=max(maxSum, lSum+rSum);
        }

        return maxSum;
        
    }
};

//Time complexity: O(k+k) = O(2k)
//Space Complexity: O(1)