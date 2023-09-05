
#include "ais1003/functions.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

using namespace ais1003;

TEST_CASE("Testing multiply") {
  CHECK_THAT(multiply(2.0, 3.0), Catch::Matchers::WithinRel(6.0));
  CHECK_THAT(multiply(-2.0, 3.0), Catch::Matchers::WithinRel(-6.0));
}

TEST_CASE("Testing computeSum") {
  CHECK(computeSum({1, 2, 3, 4, 5}) == 15);
  CHECK(computeSum({-1, -2, -3, -4, -5}) == -15);
}

TEST_CASE("Testing findLowest") {
  CHECK_THAT(findLowest({1.0f, 2.0f, 3.0f, 4.0f, 5.0f}), Catch::Matchers::WithinRel(1.0f));
  CHECK_THAT(findLowest({5.0f, 4.0f, 3.0f, 2.0f, 1.0f}), Catch::Matchers::WithinRel(1.0f));
}

TEST_CASE("Testing countValuesBelowThreshold") {
  CHECK(countValuesBelowThreshold({1.0, 2.0, 3.0, 4.0, 5.0}, 3.5) == 3);
  CHECK(countValuesBelowThreshold({5.0, 4.0, 3.0, 2.0, 1.0}, 0.5) == 0);
}

TEST_CASE("Testing capitalizeString") {
  CHECK(capitalizeString("per") == "Per");
  CHECK(capitalizeString("").empty());
  CHECK(capitalizeString("OLA") == "Ola");
  CHECK(capitalizeString("hIlDe") == "Hilde");
}

TEST_CASE("Testing mathOperation") {
    double a = 5.0;
    double b = 3.0;

    CHECK_THAT(mathOperation(a, b, Operations::ADD), Catch::Matchers::WithinRel(a+b));
    CHECK_THAT(mathOperation(a, b, Operations::SUBTRACT), Catch::Matchers::WithinRel(a-b));
    CHECK_THAT(mathOperation(a, b, Operations::MULTIPLY), Catch::Matchers::WithinRel(a*b));
    CHECK_THAT(mathOperation(a, b, Operations::DIVIDE), Catch::Matchers::WithinRel(a/b));
}

TEST_CASE("Testing containsSpace") {
    CHECK(containsSpace("Hello World") == true);
    CHECK(containsSpace("Hello") == false);
    CHECK(containsSpace("") == false);
    CHECK(containsSpace(" ") == true);
    CHECK(containsSpace("Have a great day!") == true);
}
