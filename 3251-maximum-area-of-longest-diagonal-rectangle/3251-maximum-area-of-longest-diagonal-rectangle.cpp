#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;          
        double maxDiag = 0.0; 

        for (auto &rect : dimensions) {
            int length = rect[0];
            int width = rect[1];

            double diagonal = sqrt(length * length + width * width);
            int area = length * width;
            if (diagonal > maxDiag || 
               (fabs(diagonal - maxDiag) < 1e-9 && area > ans)) {
                maxDiag = diagonal;
                ans = area;
            }
        }
        return ans;
    }
};
