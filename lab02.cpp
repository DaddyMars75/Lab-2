#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {

    // ==========================================
    // Part 2 - Guided Practice: Temperatures
    // ==========================================

    vector<double> temperatures = {72.5, 68.0, 74.5, 71.0, 69.5};

    // Step 1: Display all temperatures using an index-based loop
    cout << "Temperatures using index-based loop:" << endl;

    for (int i = 0; i < temperatures.size(); i++) {
        cout << temperatures[i] << " ";
    }

    cout << endl << endl;

    // Step 2: Display first and last temperatures
    cout << "First temperature: " << temperatures.front() << endl;
    cout << "Last temperature: " << temperatures.back() << endl;
    cout << endl;

    // Step 3: Display value at index 2 using [] and at()
    cout << "Index 2 using []: " << temperatures[2] << endl;
    cout << "Index 2 using at(): " << temperatures.at(2) << endl;
    cout << endl;

    // Step 4: Display all temperatures using range-based loop
    cout << "Temperatures using range-based loop:" << endl;

    for (double temp : temperatures) {
        cout << temp << " ";
    }

    cout << endl << endl;

    // Step 5: Increase every temperature by 1.0
    for (double &temp : temperatures) {
        temp += 1.0;
    }

    // Step 6: Display modified vector
    cout << "Modified temperatures:" << endl;

    for (double temp : temperatures) {
        cout << temp << " ";
    }

    cout << endl << endl;


    // ==========================================
    // Task 1 - Three Ways to Traverse
    // ==========================================

    vector<int> numbers = {5, 10, 15, 20, 25};

    // 1. Index-based loop
    cout << "Task 1 - Index-based loop:" << endl;

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // 2. Range-based loop
    cout << "Task 1 - Range-based loop:" << endl;

    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;

    // 3. Iterator-based loop
    cout << "Task 1 - Iterator-based loop:" << endl;

    for (vector<int>::iterator it = numbers.begin();
         it != numbers.end();
         ++it) {

        cout << *it << " ";
    }

    cout << endl << endl;


    // ==========================================
    // Task 2 - Simple Vector Analysis
    // ==========================================

    vector<int> scores = {78, 91, 66, 84, 95, 73, 83, 92, 89, 77};

    // Find the average
    int total = 0;

    // Count scores >= 80
    int count80 = 0;

    for (int score : scores) {
        total += score;

        if (score >= 80) {
            count80++;
        }
    }

    double average = static_cast<double>(total) / scores.size();

    // Find top three scores
    vector<int> sortedScores = scores;

    sort(sortedScores.begin(), sortedScores.end(), greater<int>());

    cout << "Task 2 - Vector Analysis:" << endl;

    cout << "Top three scores: "
         << sortedScores[0] << ", "
         << sortedScores[1] << ", "
         << sortedScores[2] << endl;

    cout << fixed << setprecision(1);

    cout << "Average score: "
         << average << endl;

    cout << "Scores >= 80: "
         << count80 << endl;

    cout << endl;


    // ==========================================
    // Task 3 - Compare [] and at()
    // ==========================================

    vector<int> v = {10, 20, 30};

    cout << "Task 3 - Comparing [] and at()" << endl;

    cout << "Valid indices are 0, 1, and 2." << endl;

    // Do NOT run v[5].
    // It causes undefined behavior.

    try {
        cout << "Using at(5): " << v.at(5) << endl;
    }
    catch (const out_of_range &e) {
        cout << "at(5) caused an out_of_range exception." << endl;
        cout << "The index is outside the vector." << endl;
    }

    return 0;
}
