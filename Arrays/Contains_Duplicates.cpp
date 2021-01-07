class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        std::unordered_map<int, int> tbl;

        for (int i = 0; i < nums.size(); i++)
        {
            if (tbl.find(nums[i]) != tbl.end())
            {
                return true;
            }
            tbl[nums[i]] = 1;
        }
        return false;
    }
};