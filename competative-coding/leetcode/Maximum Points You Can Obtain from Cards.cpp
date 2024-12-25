class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int Sum = 0;
        for (int i = 0; i < cardPoints.size(); ++i) {
            int point = cardPoints[i];
            Sum += point;
        }
        int K = n - k;
        int minSubarraySum = 0, currentSum = 0;
        for (int i = 0; i < n; ++i) {
            currentSum += cardPoints[i];
            if (i >= K) {
                currentSum -= cardPoints[i - K];
            }
            if (i >= K - 1) {
                minSubarraySum = (minSubarraySum == 0) ? currentSum : min(minSubarraySum, currentSum);
            }
        }
        return Sum - minSubarraySum;
    }
};
