class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        //integer convert
        int stA = stoi(arriveAlice.substr(3)),stB = stoi(arriveBob.substr(3)),enA = stoi(leaveAlice.substr(3)),enB = stoi(leaveBob.substr(3));
        //int d1,d2;

        for(int i = 0 ; i<stoi(arriveAlice.substr(0, 2))-1;i++) stA += mon[i];
        
        for(int i = 0 ; i<stoi(leaveAlice.substr(0, 2))-1;i++) enA += mon[i];

        for(int i = 0 ; i<stoi(arriveBob.substr(0, 2))-1;i++) stB += mon[i];

        for(int i = 0 ; i<stoi(leaveBob.substr(0, 2))-1;i++) enB += mon[i];

        cout<<"start = "<< max(stA,stB)<<" end = "<<min(enA,enB);

        if(max(stA,stB) > min(enA,enB)) return 0;

        return (min(enA,enB) - max(stA,stB) + 1);
    }
};