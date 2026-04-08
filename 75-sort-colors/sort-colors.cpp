class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =  nums.size();
        int st = 0, en = n - 1, mid = 0;
        while(mid <= en){
            if(nums[mid] == 2){
                if(nums[en] != 2) swap(nums[mid],nums[en]);
                en--;
                continue;
            }else if(nums[mid] == 0){
                if(nums[st] != 0) swap(nums[mid],nums[st]);
                st++,mid++;
            }else{
                mid++;
            }
        }
        //return nums;
    }
};