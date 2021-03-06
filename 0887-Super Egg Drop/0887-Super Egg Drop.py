class Solution:
    def superEggDrop(self, K, N):
        """
        :type K: int
        :type N: int
        :rtype: int
        """
        dp = [0] * (K + 1)
        m = 0
        while dp[K] < N:
            for k in range(K, 0, -1):
                dp[k] = dp[k - 1] + dp[k] + 1
            m += 1
        return m