#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Custom comparator to sort numbers to form the largest number
bool customCompare(int a, int b) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    return s1 + s2 > s2 + s1;
}

string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), customCompare);
    
    // Handle the case when the largest number is 0
    if (nums[0] == 0) {
        return "0";
    }
    
    string result = "";
    for (int num : nums) {
        result += to_string(num);
    }
    
    return result;
}

int main() {
    vector<int> nums1 = {12, 23, 13, 45, 8, 92};
    cout << "Output_1: " << largestNumber(nums1) << endl;

    vector<int> nums2 = {18, 27, 93, 86, 43, 98 ,101, 202};
    cout << "Output_2: " << largestNumber(nums2) << endl;

    return 0;
}




