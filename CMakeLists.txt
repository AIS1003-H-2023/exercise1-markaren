cmake_minimum_required(VERSION 3.18)
project(ais1003_exercise1)

set(CMAKE_CXX_STANDARD 20)

# ============================
# Testing
# ============================

# Download Catch2 unit-test framework from GitHub
include(FetchContent)
	FetchContent_Declare(
			Catch2
			GIT_REPOSITORY https://github.com/catchorg/Catch2.git
			GIT_TAG v3.3.2
	)
	FetchContent_MakeAvailable(Catch2)

enable_testing()
add_subdirectory(tests)
