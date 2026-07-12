#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    static const vector<int> extremely_round = {
        1, 2, 3, 4, 5, 6, 7, 8, 9,
        10, 20, 30, 40, 50, 60, 70, 80, 90,
        100, 200, 300, 400, 500, 600, 700, 800, 900,
        1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000,
        10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000,
        100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000};

    int n;
    if (!(cin >> n))
        return;
    int cnt = upper_bound(extremely_round.begin(), extremely_round.end(), n) - extremely_round.begin();
    cout << cnt << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
        solve();
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is extremely round
bool check(long long x) // Maximum x can be 999999
{
    long long count_of_digits = 0; // To count total digits in x
    long long count_of_zeroes = 0; // To count number of zeroes in x
    while (x) // Loop through each digit of x
    {
        if (x % 10 == 0) // Check if the current digit is zero
            count_of_zeroes++; // Increment zero count
        count_of_digits++; // Increment digit count
        x /= 10; // Remove the last digit from x
    }
    // Return true if all digits except one are zero
    return count_of_zeroes == count_of_digits - 1;
} // Time Complexity: O(6) since maximum 6 digits

int main()
{
    // Precomputing all the extremely round numbers up to 999999
    vector<long long> round_numbers;
    for (long long i = 1; i <= 999999; i++) // Loop through all numbers from 1 to 999999
    {
        if (check(i) == true) // Check if the number is extremely round
            round_numbers.push_back(i); // Store it in the vector
    }

    int t; // Number of test cases
    cin >> t;
    while (t--) // Process each test case
    {
        long long n; // Upper limit for current test case
        cin >> n;

        long long answer = 0; // To store the count of extremely round numbers <= n
        for (int i = 0; i < round_numbers.size(); i++) // Iterate through precomputed round numbers
        {
            if (round_numbers[i] <= n) // Check if the round number is within the limit
                answer++; // Increment the count
            else
                break; // Stop if the round number exceeds n
        }
        cout << answer << endl; // Output the result for the current test case
    }
    return 0;
}


Time Complexity (TC):
- Per test case: O(54)
- Overall: O(999999 * 6 + 54 * 10^4) ~ O(10^6)

Space Complexity (SC): O(54)
*/
