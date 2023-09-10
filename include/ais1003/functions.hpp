
#ifndef AIS1003_EXERCISE1_FUNCTIONS_HPP
#define AIS1003_EXERCISE1_FUNCTIONS_HPP

#include <string>
#include <vector>

#include "operations.hpp"

namespace ais1003 {

    double multiply(double a, double b) {

        return a*b;
    }

    int computeSum(std::vector<int> values) {

        // note: can be solved with e.g. std::accumulate

        int sum = 0;
        for (auto value : values) {
            sum += value;
        }
        return sum;
    }

    float findLowest(std::vector<float> values) {

        // Note: solution assumes values cannot be empty.
        // Can be solved with e.g. std::min_element

        float lowest = values.front();
        for (auto value : values) { // I don't care that the first element is read twice
            if (value < lowest) {
                lowest = value;
            }
        }
        return lowest;
    }

    bool containsSpace(std::string str) {

        // again can be solved by more fancy std:: algorithms like any_of

        for (auto c : str) {
            if (std::isspace(c)) { // or c == ' ', but isspace is better. Read the documentation.
                return true;
            }
        }

        return false; // placeholder
    }

    int countValuesBelowThreshold(std::vector<double> values, double threshold) {

        // again can be solved by more fancy std:: algorithms like count_if

        int count = 0;
        for (auto value : values) {
            if (value < threshold) {
                ++count; // or value++ (what is the difference?)
            }
        }

        return count;
    }

    std::string capitalizeString(std::string str) {

        // again can be solved by more fancy std:: algorithms like transform

        if (str.empty()) return ""; // early return

        str.front() = std::toupper(str.front()); // front() same as [0]
        for (int i = 1; i < str.size(); i++) {
            str[i] = std::tolower(str[i]);
        }

        return str;
    }

    double mathOperation(double a, double b, Operations op) {
        switch (op) {
            case Operations::ADD:
                return a+b;
            case Operations::SUBTRACT:
                return a-b;
            case Operations::MULTIPLY:
                return a*b;
            case Operations::DIVIDE:
                return a/b;
        }
    }

} // namespace ais1003

#endif // AIS1003_EXERCISE1_FUNCTIONS_HPP
