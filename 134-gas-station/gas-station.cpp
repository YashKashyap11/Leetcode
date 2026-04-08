class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cg = 0,idx = 0,tg = 0,tc = 0;
        for(int i = 0;i < gas.size();i++){
            cg += gas[i] - cost[i];

            if(cg < 0){
                idx = i + 1;
                cg = 0;
            }

            tg += gas[i];
            tc += cost[i];
        }
        if(tc <= tg) return idx;
        return -1;
    }
};