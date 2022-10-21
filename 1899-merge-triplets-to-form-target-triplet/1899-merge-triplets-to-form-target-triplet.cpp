class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
       bool ok1 = false;
    bool ok2 = false;
    bool ok3 = false;

    for (vector<int> &it : triplets)
    {
        if (it[0] == target[0] and it[1] <= target[1] and it[2] <= target[2])
            ok1 = true;
        if (it[0] <= target[0] and it[1] == target[1] and it[2] <= target[2])
            ok2 = true;
        if (it[0] <= target[0] and it[1] <= target[1] and it[2] == target[2])
            ok3 = true;
    }
    return ok1 and ok2 and ok3;
    }
};