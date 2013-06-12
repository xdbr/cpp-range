/*

    range.hpp

    range generator
*/

#include <list>
#include <type_traits>

// TODO
// [ ] return generators (function pointers)...
// [X] enable_if only for arithmetic types.
// [ ] templatize for other containers than list (or return generators)

template<class T, class Enable = void>
class range; // undefined

template <class T>
class range<T, typename std::enable_if<std::is_arithmetic<T>::value >::type>
{
    T               begin_, end_, step_;
    std::list<T>    list_;
public:
    range(T begin, T end, T step = 1)
        : begin_(begin), end_(end), step_(step)
        {
            for (; begin_ <= end_; begin_ += step_) {
                list_.push_back(begin_);
            }
        }
    inline auto begin() -> decltype(list_.begin()) { return list_.begin(); }
    inline auto end()   -> decltype(list_.end())   { return list_.end();   }
    inline auto get()   -> decltype(list_)         { return list_; }
};
