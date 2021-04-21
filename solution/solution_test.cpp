#include "header.h"


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// Test average salary method
TEST(SolutionTest, BasicAssertions){
  Solution sol = Solution();
  vector<int> salary = {8000,9000,2000,3000,6000,1000};
  EXPECT_EQ(sol.average(salary), 4750.00);
}