#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include <gtest/gtest.h>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double salary_sum =  accumulate(salary.begin(), salary.end(), 0.) - *max_element(salary.begin(), salary.end()) - *min_element(salary.begin(), salary.end());
        return salary_sum / (salary.size() - 2);
    }
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};