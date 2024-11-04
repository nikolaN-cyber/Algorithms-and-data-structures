#include "Solutions.h"
#include <algorithm>

std::vector<int> Solutions::twoSum(std::vector<int> &nums, int target)
{
    std::vector<int> novi;
    bool found = false;
    int i = 0;
    while (!found && i < nums.size() - 1)
    {
        if (nums[i] + nums[i + 1] == target)
        {
            novi.push_back(i);
            novi.push_back(i + 1);
            found = true;
        }
        i++;
    }
    return novi;
}

int Solutions::lengthOflongestSubstring(std::string s)
{
    int counter = 0;
    std::string substring;
    int i = 0;
    int maxCount = 0;
    while (i < s.length())
    {
        int pos = substring.find(s[i]);
        if (pos == std::string::npos)
        {
            substring += s[i];
            counter += 1;
            i++;
        }
        else
        {
            i++;
            counter = 0;
            substring = "";
        }
        if (maxCount < counter)
        {
            maxCount = counter;
        }
    }
    return maxCount;
}

double Solutions::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();

    std::vector<int> merged;

    for (int i = 0; i < n; i++)
    {
        merged.push_back(nums1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        merged.push_back(nums2[i]);
    }

    sort(merged.begin(), merged.end());
    int total = merged.size();

    if (total % 2 == 1)
    {
        return (double)merged[total / 2];
    }
    else
    {
        int middle1 = merged[total / 2 - 1];
        int middle2 = merged[total / 2];
        return (double)(middle1 + middle2) / 2;
    }
}

int Solutions::maxArea(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxarea = 0;
    while (left < right){
        maxarea = max(maxarea, min(height[left], height[right]) * (right-left));
        if (height[left] < height[right]){
            left++;
        }
        else {
            right--;
        }
    }
    return maxarea;
}
