
#ifndef AIS1003_EXERCISE1_FUNCTIONS_HPP
#define AIS1003_EXERCISE1_FUNCTIONS_HPP

#include <string>
#include <vector>

#include "operations.hpp"

namespace ais1003 {

    double multiply(double a, double b) {
        // TODO return the result of a multiplied by b

        return -1; // placeholder
    }

    int computeSum(std::vector<int> values) {
        // TODO return the sum of all numbers in `values`

        return -1; // placeholder
    }

    float findLowest(std::vector<float> values) {
        // TODO return the lowest number in `values`
        // In this case you can ignore the special case where 'values' could be empty.

        return -1; // placeholder
    }

    bool containsSpace(std::string str) {
        // TODO return true if `str` contains a space (' '), false otherwise

        return false; // placeholder
    }

    int countValuesBelowThreshold(std::vector<double> values, double threshold) {
        // TODO return the number of elements in `values` that has a value below the
        // given threshold value

        return -1; // placeholder
    }

    std::string capitalizeString(std::string str) {
        // TODO: Capitalize the first letter of the string `str`.
        //  E.g "per" -> "Per", "" -> "", "OLA" -> "Ola", etc.
        // Note: `str` could be empty!

        return ""; // placeholder
    }

    double mathOperation(double a, double b, Operations op) {
        // TODO add, subtract, multiply or divide `a` and `b` depending on the value of the enumeration `op`

        return -1; // placeholder
    }

} // namespace ais1003

#endif // AIS1003_EXERCISE1_FUNCTIONS_HPP
