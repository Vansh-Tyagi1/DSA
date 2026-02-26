class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += cardPoints[i];
        }
        if(k == n) return totalSum;

        int windowSize = n - k;
        int windowSum = 0;
        for(int i = 0; i < windowSize; i++) {
            windowSum += cardPoints[i];
        }

        int minSum = windowSum;
        for(int i = windowSize; i < n; i++) {
            windowSum += cardPoints[i];
            windowSum -= cardPoints[i - windowSize];
            minSum = min(minSum, windowSum);
        }

        return totalSum - minSum;
    }
};