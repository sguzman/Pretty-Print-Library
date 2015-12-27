# Pretty-Print-Library

A C++ library for printing standard library data structures

## Purpose
The purpose of this library is to add print support to C++ STD containers. With the support of this library, you can now print containers like you can any other data type.

## Containers Supported
These are the containers that this library supports

### Sequence Containers
Sequence containers implement data structures which can be accessed sequentially

#### [array](http://en.cppreference.com/w/cpp/container/array) (C++11)
static contiguous array
#### [deque](http://en.cppreference.com/w/cpp/container/deque)
double-ended queue
#### [forward_list](http://en.cppreference.com/w/cpp/container/forward_list) (C++11)
singly-linked list
#### [list](http://en.cppreference.com/w/cpp/container/list)
doubly-linked list
#### raw
C style array
#### [vector](http://en.cppreference.com/w/cpp/container/vector)
dynamic contiguous array

### Associative containers
Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity)

#### [set](http://en.cppreference.com/w/cpp/container/set)
collection of unique keys, sorted by keys
#### [map](http://en.cppreference.com/w/cpp/container/map)
collection of key-value pairs, sorted by keys, keys are unique
#### [multimap](http://en.cppreference.com/w/cpp/container/multimap)
collection of key-value pairs, sorted by keys
#### [multiset](http://en.cppreference.com/w/cpp/container/multiset)
collection of keys, sorted by keys

### References
[Containers](http://en.cppreference.com/w/cpp/container)
