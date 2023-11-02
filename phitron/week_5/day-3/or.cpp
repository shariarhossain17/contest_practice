#include <iostream>
#include <vector>

int countOddBitwiseORSubarrays(const std::vector<int> &A, int N, int K)
{
    int oddSubarrays = 0;

    for (int i = 0; i <= N - K; ++i)
    {
        int currentOR = 0;
        for (int j = i; j < i + K; ++j)
        {
            currentOR |= A[j];
        }
        if (currentOR % 2 != 0)
        {
            oddSubarrays++;
        }
    }

    return oddSubarrays;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N, K;
        std::cin >> N >> K;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }

        int result = countOddBitwiseORSubarrays(A, N, K);
        std::cout << result << std::endl;
    }

    return 0;
}
