class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){

            int first=nums[i];
            int second = target - nums[i];

            if(mp.find(second) != mp.end()){
                return {mp[second], i};
            }

            mp[first] = i;
        }

        return {};
    }
};