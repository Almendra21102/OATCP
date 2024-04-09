#include <iostream>
#include <vector>

class Solution {
public:
    int minPatches(std::vector<int>& nums, int n) {
        long long missing = 1;
        int patches = 0, i = 0;
        
        while (missing <= n) {
            if (i < nums.size() && nums[i] <= missing) {
                missing += nums[i];
                i++;
            } else {
                missing += missing;
                patches++;
            }
        }
        
        return patches;
    }
};

int main() {
    Solution solution;
    
    // Input the sorted integer array nums
    std::vector<int> nums;
    int num;
    char choice;
    std::cout << "Enter the sorted integer array nums (enter 'x' to stop): ";
    while (std::cin >> num) {
        nums.push_back(num);
        std::cout << "Continue? (y/n): ";
        std::cin >> choice;
        if (choice == 'x')
            break;
    }

    // Input the integer n
    int n;
    std::cout << "Enter the integer n: ";
    std::cin >> n;

    // Calculate and output the minimum number of patches required
    std::cout << "Minimum patches required: " << solution.minPatches(nums, n) << std::endl;

    return 0;
}
