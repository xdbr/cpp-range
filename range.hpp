/*

    range.hpp

    range generator
*/

#include <list>

// TODO: better yet, return generators (function pointers)...

template <class T>
class range {
    T               begin_;
    T               end_;
    T               step_;
    std::list<T>    list_;
public:
    range(T begin, T end, T step = 1)
        : begin_(begin), end_(end), step_(step)
        {
            for (T i = begin_; i <= end_; i += step_) {
                list_.push_back(i);
            }
        }
    inline auto begin() -> decltype(list_.begin()) { return list_.begin(); }
    inline auto end()   -> decltype(list_.end())   { return list_.end();   }
    inline auto get()   -> decltype(list_)         { return list_; }
};
