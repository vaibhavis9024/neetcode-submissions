class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int p=0, q=people.size()-1;
        int boats=0;
        bool flag=false;
        while(p<=q){
            if(people[p]+people[q]<=limit){
                boats++;
                p++;
                q--;
            }
            else if(people[p]+people[q]>limit){
                boats++;
                q--;
            }
        }
        return boats;
    }
};