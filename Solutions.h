#ifndef SOLUTIONS_H
#define SOLUTIONS_H

#include <vector>
#include <string>

using namespace std;

class Solutions {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    int lengthOflongestSubstring(std::string s);
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
    int maxArea(vector<int>& height);
};

#endif
