#include "header.h"


using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double salary_sum =  accumulate(salary.begin(), salary.end(), 0.) - *max_element(salary.begin(), salary.end()) - *min_element(salary.begin(), salary.end());
        return salary_sum / (salary.size() - 2);
    }
};


int main()
{
    Solution sol = Solution();
    vector<int> salary = {8000,9000,2000,3000,6000,1000};
    double ans = sol.average(salary);
    cout << "solution: " << ans << endl;
    return -1;
}