class Solution {
public:
    int pivotIndex(vector<int>& v) {
 int right_sum=0,left_sum=0;
        
 for(int i=0;i<v.size();i++){
       right_sum+=v[i];
   }
        
  for(int i=0;i<v.size();i++){
       right_sum=right_sum-v[i];
      
      if(right_sum==left_sum){
          return i;
      }
      
      left_sum+=v[i];
   }
   
        return -1;
    }
};