#include "pch.h"
#include "../TDD03_PrimeFactor/prime-factors.cpp"
#include <vector>
using namespace std;
TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
  EXPECT_EQ(expected, prime_factor.of(1));
}