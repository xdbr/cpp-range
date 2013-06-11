cpp-range
=========

generate ranges for loops

Description
===========

Header-only library to ease looping over a specific range.

Examples
========

    #include "range.hpp"

    #include <iostream>

    int main() {
        /* Iterations: {0, 2, 4, 6, 8, 10} */
        for (const auto & i : range<int>(0, 10, 2))
            std::cout << i << std::endl;

        return 0;
    }


Usage
=====

* `include` the header file
* Compile your executable/library with `-std=c++11`
    * (for now, this is a C++11-only header, but could easily be changed)

License
=======

WTFPL
