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
    printLine(width);

    int closestSum = sols.threeSumClosest(nums1, 13);
    cout << "5. Closest 3 sum: " << closestSum << "| Time complexity O(n^2)+O(nlogn), for larger n O(n^2)." << endl;
    printLine(width);

    vector<int> duplicates = {1,1,1,2,2,4,5,6,6};
    int numberOfElementsNew = sols.removeDuplicates(duplicates);
    cout << "6. New array length: " << numberOfElementsNew << "| Time complexity O(n)." << endl;
    printLine(width);

    vector<int> rotated = {4,5,6,7,0,1,2};
    int index = sols.search(rotated, 0);
    cout << "7. Index: " << index << " | Time complexity O(logN)." << endl;
    printLine(width);

    vector<int> largeInt = {1,2,9};
    vector<int> largeInt1 = {3,4,1};

    sols.plusOne(largeInt1);
    sols.plusOne(largeInt);

    cout << "8. Plus one: ";

    for (int i= 0; i<largeInt.size(); i++){
        cout << largeInt[i] << " "; 
    }

    cout << " | Time complexity O(n).";
    cout << endl;
    printLine(width);
    

    return 0;
}
