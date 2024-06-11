#pragma once

#include <string>
#include <iostream>
#include <vector>

using namespace std;

template <typename T> class Blob {
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;
    // constructors
    Blob();
    Blob(std::initializer_list<T> il);
    // number of elements in the Blob
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // add and remove elements
    void push_back(const T& t) { data->push_back(t); }
    // move version; see ¡ì 13.6.3 (p. 548)
    void push_back(T&& t) { data->push_back(std::move(t)); }
    void pop_back();
    // element access
    T& back();
    T& operator[](size_type i); // defined in ¡ì 14.5 (p. 566)
private:
    std::shared_ptr<std::vector<T>> data;
    // throws msg if data[i] isn't valid
    void check(size_type i, const std::string& msg) const;
};


template <typename T> class BlobPtr {
public:
    BlobPtr() : curr(0) {}
    BlobPtr(Blob<T> &a, size_t sz = 0) :wptr(a.data), curr(sz) {}
    T& operator*() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    BlobPtr& operator++();
    BlobPtr& operator--();
private:
    std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr;
};


template <typename T> class Pal;
class C {
    friend class Pal<C>;
    template <typename T> friend class Pal2;
};
template <typename T> class C2 {
    friend class Pal<T>;
    template <typename X> friend class Pal2;
    friend class Pal3;
};

template <typename T> class Foo {
public:
    static std::size_t count() { return ctr;  }

private:
    static std::size_t ctr;

};


template <class T = int> class Numbers {
public:
    Numbers(T v = 0) : val(v) {}
private:
    T val;
};
























