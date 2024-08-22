class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long long a = 0, b = 0;
        for (size_t i = 0; i < energyDrinkA.size(); ++i) {
            long long newA = max(a + energyDrinkA[i], b);
            long long newB = max(b + energyDrinkB[i], a);
            a = newA;
            b = newB;
        }
        return max(a, b);
        
    }
};

