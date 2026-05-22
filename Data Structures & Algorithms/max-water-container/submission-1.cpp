class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0;
        int currArea;
        int p=0, q=heights.size()-1;
        while(p<q){
            currArea=(q-p)*min(heights[p], heights[q]);
            maxArea=max(maxArea, currArea);
            if(heights[p]>heights[q]) q--;
            else if(heights[q]>heights[p]) p++;
            else{
                p++;
                q--;
            }
        }

        return maxArea;
    }
};
