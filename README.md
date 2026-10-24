# commonlounge-learncpp

---

This repository contains the C++ code files coded for the Learn C++ course on the now-archived [**_CommonLounge_**](https://www.commonlounge.com/learn-c-b7d5d197ea274a0f83eee5c1c9d17e8c/) by **Baljit Panda** ([_olympus-mons26_](https://github.com/olympus-mons26/commonlounge-learncpp)), using JetBrains CLion.

---

### How to use?
1. Make a C++ file. 
2. Write your code in the file.
3. In `CMakeLists.txt`, add `add_executable(filename filename.cpp)` on a new line.
4. Click the tab to the left of the "Build hammer" and select the name of the file, or, do this after remaking the `CMake` project.
5. Run.

---

### Current files

1. `helloworld.cpp`
2. `datatypes-operators.cpp`
3. `cpp-strings-basics.cpp`
4. `user-inputs-variables.cpp`
5. `conditionals.cpp`
6. `arrays-loops.cpp`
7. `exercise-hotter-colder.cpp`
8. `functions.cpp`
9. `exercise-cows-and-bulls.cpp`
10. `sudoku-solver.cpp`

---

### C++ Boilerplate Template

- The **boilerplate** template for any `C++` file -
    ``` c++
  #include <iostream>
  using namespace std;
  
  int main()
  {
      // actual code here
      return 0;
  }
    ```