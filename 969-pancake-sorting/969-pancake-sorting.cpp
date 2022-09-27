class Solution {
public:
 int findMaxIdx(vector<int>& A, int idx) {
        
        int mx = A[0], mxidx = 0;
        for (int i = 0; i <=idx; i++) {
            if (A[i] > mx) {
                mxidx = i;
                mx = A[i];
            }
        }
        return mxidx;
    }
    bool issorted(vector<int>& arr)
    {
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            return false;
        }
        return true;
    }
    vector<int> pancakeSort(vector<int>& arr) {
        if(issorted(arr))
        return {};
        vector<int>ans;
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            int x=findMaxIdx(arr,i);  ///find the idx of max element
            ans.push_back(x+1); ///reverse the subarray upto max ele
            ans.push_back(i+1); ///reverse the subarray upto i
            reverse(arr.begin(),arr.begin()+x+1); 
            reverse(arr.begin(),arr.begin()+i+1);

        }
        return ans;
    }
};

