class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
    int empty = 0;
    int totalDrunk = 0;

    while (full > 0) {
        totalDrunk += full;       // Drink all full bottles
        empty += full;             // All full bottles become empty
        full = empty / numExchange; // Exchange empty bottles for full ones
        empty = empty % numExchange; // Remaining empty bottles
    }

    return totalDrunk;
    }
};