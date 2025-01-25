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
    int threeSumClosest(vector<int> &nums, int target);
    int removeDuplicates(vector<int> &nums);
    int search(vector<int> &nums, int target);
    vector<int> plusOne(vector<int>& digits);
    int missingNumber(vector<int>& nums);
    void moveZeroes(vector<int> &nums);
};

#endif
