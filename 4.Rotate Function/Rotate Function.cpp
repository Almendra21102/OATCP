#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();
    long long sum = 0;
    long long rotation = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        rotation += i * nums[i];
    }
    
    long long maxRotation = rotation;
    
    for (int i = n - 1; i >= 1; --i) {
        rotation += sum - n * nums[i];
        maxRotation = max(maxRotation, rotation);
    }
    
    return maxRotation;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers for the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // Output result
    int result = maxRotateFunction(nums);
    cout << "Maximum value of F(0), F(1), ..., F(n-1): " << result << endl;
    
    return 0;
}

