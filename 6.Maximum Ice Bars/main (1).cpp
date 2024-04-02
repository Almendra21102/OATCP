#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    int max_cost = *max_element(costs.begin(), costs.end());
    
    vector<int> counting_array(max_cost + 1, 0);

    for (int cost : costs) {
        counting_array[cost]++;
    }

    int ice_cream_bars = 0;
    for (int i = 0; i <= max_cost; ++i) {
        while (counting_array[i] > 0 && coins >= i) {
            coins -= i;
            ice_cream_bars++;
            counting_array[i]--;
        }
        if (coins < i) {
            break; // No more money to buy ice cream bars
        }
    }

    return ice_cream_bars;
}

int main() {
    int n;
    cout << "Enter the number of ice cream bars: ";
    cin >> n;

    vector<int> costs(n);
    cout << "Enter the costs of the ice cream bars: ";
    for (int i = 0; i < n; ++i) {
        cin >> costs[i];
    }

    int coins;
    cout << "Enter the number of coins the boy has: ";
    cin >> coins;

    cout << "Maximum number of ice cream bars the boy can buy: " << maxIceCream(costs, coins) << endl;

    return 0;
}


