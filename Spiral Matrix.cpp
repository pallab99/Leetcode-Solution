class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int rowBegin=0;
        int rowEnd=m-1;
        int colBegin=0;
        int colEnd=n-1;
        vector<int>ans;
        if(m==0)
            return ans;
        
        while(rowBegin<=rowEnd and colBegin<=colEnd)
        {
            for(int i=colBegin;i<=colEnd;i++)
            {
                ans.push_back(matrix[rowBegin][i]);
            }
            rowBegin++;
            for(int i=rowBegin;i<=rowEnd;i++)
            {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            if(rowBegin<=rowEnd)
            {
                for(int i=colEnd;i>=colBegin;i--)
                    ans.push_back(matrix[rowEnd][i]);
            }
            rowEnd--;
            
            if(colBegin<=colEnd)
            {
                for(int i=rowEnd;i>=rowBegin;i--)
                    ans.push_back(matrix[i][colBegin]);
            }
            
            colBegin++;
        }
        
        return ans;
    }
};
