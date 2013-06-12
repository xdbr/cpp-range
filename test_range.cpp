/*

    test_range.cpp

    test range generator
*/

#include "range.hpp"

#include <iostream>
#include <cassert>
#include <list>
#include <string>
/* Compile with -D_TEST_DEBUG to see output */
// #define _TEST_DEBUG

int main() {

    std::list<int> list_int = { 0, 2, 4, 6, 8, 10 };

    #ifdef _TEST_DEBUG
    std::cout << "Test range<int>(0, 10, 2)" << std::endl;
    for (const auto & i : range<int>(0, 10, 2))
        std::cout << i << std::endl;
    #endif /* _TEST_DEBUG */
    
    assert( list_int == range<int>(0, 10, 2).get() );

    // harr, harr.
    std::list<char> list_char = { 'a', 'd', 'g', 'j', 'm', 'p', 's', 'v', 'y' };

    #ifdef _TEST_DEBUG
    std::cout << "Test range<char>('a', 'z', 3)" << std::endl;
    for (const auto & l :range<char>('a', 'z', 3))
        std::cout << l << std::endl;
    #endif /* _TEST_DEBUG */
    
    assert( list_char == range<char>('a', 'z', 3).get() );



    std::list<long> list_long = { -2, -1, 0, 1, 2 };
    
    #ifdef _TEST_DEBUG
    std::cout << "Test range<int>(-2, 2)" << std::endl;
    for (const auto & l : range<long>(-2, 2))
        std::cout << l << std::endl;
    #endif /* _TEST_DEBUG */
    assert( list_long == range<long>(-2, 2).get() );


    // Not instantiable:
    // range<std::string>("a", "z", 1)) {

    std::cout << "All tests successful." << std::endl;
    
    return 0;
}