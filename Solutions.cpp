#include "Solutions.h"
#include <algorithm>
#include <climits>

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
    while (left < right)
    {
        maxarea = max(maxarea, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxarea;
}

int Solutions::threeSumClosest(vector<int> &nums, int target)
{
    int closest = INT_MAX;
    sort(nums.begin(), nums.end());
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int currentSum = nums[i] + nums[left] + nums[right];
            int diff = abs(target - currentSum);
            if (currentSum == target)
            {
                return currentSum;
            }
            if (abs(currentSum - target) < abs(closest - target))
            {
                closest = currentSum;
            }
            else if (currentSum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return closest;
}

int Solutions::removeDuplicates(vector<int> &nums)
{
    int i;
    int j = 1;
    for (i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int Solutions::search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[left] <= nums[mid])
        {
            if (nums[left] <= target && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}

vector<int> Solutions::plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;
        if (i == 0)
        {
            digits.insert(digits.begin(), 1);
            return digits;
        }
    }
    return digits;
}

int Solutions::missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sumFirstN = (n * (n + 1)) / 2;
    int sumArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumArray += nums[i];
    }
    int missing = sumFirstN - sumArray;
    return missing;
}

void Solution::moveZeroes(vector<int> &nums)
{

    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[k++] = nums[i];
            nums[i] = 0;
        }
    }
}
