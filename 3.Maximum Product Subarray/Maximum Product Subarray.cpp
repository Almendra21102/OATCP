#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int prod=1;

        for(int i=0;i<nums.size();i++)
        {
          prod*=nums[i];
          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];

          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        return maxi;
    }
};

int main() {
    // Input the size of nums1 and elements
    int n1;
    cout << "Enter the size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter " << n1 << " integers for nums1:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }


    // Initialize Solution object
    Solution sol;
    
    // Output results
    int result1 = sol.maxProduct(nums1);
   
    
    // Print results
    cout << "Output for nums1: " << result1 << endl;
  
    
    return 0;
}
