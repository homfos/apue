#ifndef MY_SHARED_PTR_CPP
#define MY_SHARED_PTR_CPP

#include <cstddef>

template <typename T>
class MySharedPtr
{
public:
    int use_count();
    T *get();
    MySharedPtr() : object_(nullptr), use_count_(0) {} 
    MySharedPtr(T *object) : object_(object), use_count_(1) {}
    MySharedPtr(const MySharedPtr &origin) : object_(origin.object_), use_count_(origin.use_count_) {}

private:
    T *object_;
    unsigned use_count_;
};
#endif
