# Exercise1 - Week36

### Setup

Clone this repository by using the link provided by clicking the green Code button above.
You have the choice between HTTPS and SSH. Please choose SSH.
If you have not already configured SSH, please do so.
See this [link](https://docs.github.com/en/authentication/connecting-to-github-with-ssh).

IMHO, the easiest way to clone a repository is using the command line.
Open a command prompt with the current directory set to the directory you want the project folder to appear in and 
type `git clone` followed by the repository link. <br>
>You may also do `File->New->Project from Version Control` from within the comfort of CLion.


### Task

Implement the functions located in [functions.hpp](include/ais1003/functions.hpp).

In order to test the code run `All CTest` or the `test_functions` target. 
You do __not__ have to create a `main` to run your code.

#### Going further

As a further exercise, split the header `functions.hpp` into a header file (`.hpp`) 
with declarations and a source file (`.cpp`) with the implementation.
What changes in the CMake configuration must you additionally do?

### Autograder

When you push your changes to GitHub, a Linux box will automatically test your code. 
Be sure to check out the result from the `Actions` pane of your GitHub repository.
