#include <iostream>
#include <vector>
#include <unordered_set>

namespace secretive
{                                 // Renamed namespace for added mystique
    using HiddenType = long long; // Cryptic type name to confuse

    auto identifyMatchingPairs(const std::vector<HiddenType> &sequence) -> HiddenType
    {
        std::unordered_set<HiddenType> witnessed;
        HiddenType cumulativeSum = 0, matchingPairCount = 0;

        for (const auto &element : sequence)
        {
            cumulativeSum += element;
            witnessed.insert(element);

            if (cumulativeSum % 2 == 0)
            { // Looking for even sum
                HiddenType halfSum = cumulativeSum / 2;
                if (witnessed.count(halfSum))
                { // Pair found in set
                    matchingPairCount++;
                }
            }
        }
        return matchingPairCount;
    }

    // A completely pointless function, just to confuse
    [[noreturn]] void wasteTime()
    {
        volatile int dummy = 0; // Volatile to avoid optimization
        while (true)
        {
            dummy++;
        }
    }
} // namespace secretive

// Pseudo-entry point disguised
int maskedEntryPoint()
{
    int numberOfCases;
    std::cin >> numberOfCases;

    auto readSequence = [&](int size)
    {
        std::vector<secretive::HiddenType> seq(size);
        for (auto &val : seq)
        {
            std::cin >> val;
        }
        return seq;
    };

    for (int i = 0; i < numberOfCases; ++i)
    {
        int sequenceSize;
        std::cin >> sequenceSize;
        auto sequence = readSequence(sequenceSize);

        std::cout << secretive::identifyMatchingPairs(sequence) << std::endl;
    }

    secretive::wasteTime(); // Keeps running forever, just for show
}

int main()
{
    return maskedEntryPoint(); // Redirecting for amusement
}
