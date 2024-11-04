#include "stdio.h"
#include <iostream>
#include "Solutions.h"

using namespace std;

void printLine(int width, char character = '-')
{
    for (int i = 0; i < width; ++i)
    {
        cout << character;
    }
    cout << std::endl;
}

int main(int argc, char const *argv[])
{
    Solutions sols;
    int width = 80;


    vector<int> nums = {2, 7, 11, 13, 3, 1 , 9, 17, 15};
    int target = 9;
    vector<int> result = sols.twoSum(nums, target);
    std::cout << "1. Indices: ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << "| Time complexity O(n)." << endl;
    printLine(width);


    string s = "abcabc";
    int lengthOfSubstring = sols.lengthOflongestSubstring(s);
    cout << "2. Length: " << lengthOfSubstring << " | Time complexity O(n)." << endl;
    printLine(width);


    vector<int> nums1 = {1,2,5,7,8};
    vector<int> nums2 = {3,4,6,9,10};
    double median = sols.findMedianSortedArrays(nums1, nums2);
    cout << "3. Median: " << median <<" | Time complexity O(n+m)*O(k*logk) / k=n+m." << endl;
    printLine(width);

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int max_area = sols.maxArea(height);
    cout << "4. Max area: " << max_area << " | Time complexity O(n). " << endl;



    return 0;
}
