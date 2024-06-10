# Milestone 1: CMake Make Catch2



## Matrix Calc (45 Points)

This project aims to create a CMake project for Matrix Calculator. 

You need to create the following files and submit them at Grade scope.

* matrix.h
* matrix.cpp
* main.cpp
* test.cpp (using catch2)
* CMakeLists.txt

The following methods should be included. There shouldn't be any `std::cout` statement in the below methods while submission.

```c++
using Matrix = std::vector<std::vector<double>>;

Matrix createMatrix(int rows, int cols);
Matrix addMatrices(const Matrix& m1, const Matrix& m2);
Matrix subtractMatrices(const Matrix& m1, const Matrix& m2);
Matrix multiplyMatrices(const Matrix& m1, const Matrix& m2);
```



Note: If a method needs to throw an error, the string "Matrices dimensions do not match" must be included.



## Rubric

| Title                                     | Points |
| ----------------------------------------- | ------ |
| 1 Autograder                              | 20.0   |
| 2 Appropriate Test Cases (tests/test.cpp) | 10.0   |
| 3 Coding Style                            | 5.0    |
| 4 CMakeLists.txt (Project)                | 5.0    |
| 5 CMakeLists.txt (Catch2)                 | 5.0    |