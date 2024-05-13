#include <iostream>

const int NUM_CANDIDATES = 5;

int main() {
    int votes[NUM_CANDIDATES + 1] = {0}; // Initialize array to store votes for each candidate
    int spoiltBallots = 0;
    int vote;

    // Reading votes until the end of input
    while (std::cin >> vote) {
        if (vote >= 1 && vote <= NUM_CANDIDATES) {
            // Valid vote
            votes[vote]++;
        } else {
            // Spoilt ballot
            spoiltBallots++;
        }
    }

    // Displaying the result
    std::cout << "Candidate Votes:" << std::endl;
    for (int i = 1; i <= NUM_CANDIDATES; ++i) {
        std::cout << "Candidate " << i << ": " << votes[i] << std::endl;
    }
    std::cout << "Spoilt Ballots: " << spoiltBallots << std::endl;

    return 0;
}
