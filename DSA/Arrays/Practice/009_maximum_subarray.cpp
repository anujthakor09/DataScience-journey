class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
                currSum += nums[i];
                sum = max(currSum,sum);
                if(currSum<0){
                    currSum = 0;
                    continue;
                }
        }
    return sum;
    }
};

//Time complexicity = O(n)
//Space Complexity =O(1)
// Kadane's Algorithm
