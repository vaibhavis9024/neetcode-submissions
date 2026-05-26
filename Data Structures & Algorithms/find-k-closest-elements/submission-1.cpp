class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int p=0;
        int q=arr.size()-1;
        while(q-p+1!=k){
            if(abs(x-arr[p])<abs(x-arr[q])) q--;
            else if(abs(x-arr[p])>abs(x-arr[q])) p++;
            else if(abs(x-arr[p])==abs(x-arr[q])){
                if(arr[p]<arr[q]) q--;
                else p++; 
            }

        }
        return vector<int>(arr.begin()+p, arr.begin()+q+1);
    }
};