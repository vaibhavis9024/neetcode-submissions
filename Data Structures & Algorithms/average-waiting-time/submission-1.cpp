class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time=customers[0][0];
        long long int total=0;
        double avg=0;
        for(vector<int> c:customers){
            if(c[0]> time){
                time=c[0];
            }
            time+=c[1];
            total+=time-c[0];
        }
        avg=(double)total/customers.size();
        return avg;
    }
};