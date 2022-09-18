//
//  templatizeVector.hpp
//  TemplatizeVector
//
//  Created by Peng, Danfa  on 2022/9/18.
//

#ifndef templatizeVector_hpp
#define templatizeVector_hpp

#include <stdio.h>
#include <iostream>

template<typename T>
class MyVector
{
private:
    T * data;
    size_t _size, _capacity;

public:
    // constructor
    MyVector();
    MyVector(size_t capacity);
    MyVector(T d[], size_t size);
    MyVector(const MyVector<T>& v0);
    
    // methods
    void setSize(size_t size);
    T getValue(size_t index);
    void setValue(size_t index, T newValue);
    void freeVector();
    void pushBack(T value);
    void popBack();
    void growVector();
    void setCapacity(size_t capacity);
    size_t getSize();
    size_t getCapacity();
    void printVector();
    
    // operator
    MyVector<T>& operator=(const MyVector<T>& v0); // assign operator
    T& operator[](size_t index);
    bool operator==(const MyVector<T>& v);
    bool operator>(const MyVector<T>& v);
    
    // destructor
    ~MyVector();
};

// constructor
template <typename T>
MyVector<T>::MyVector()
{
    _capacity = 20;
    _size = 0;
    data = new T[_capacity];
}

template <typename T>
MyVector<T>::MyVector(size_t capacity)
{
    _capacity = capacity;
    _size = 0;
    data = new T[capacity];
}

template <typename T>
MyVector<T>::MyVector(T d[], size_t size)
{
    _capacity = 20;
    _size = size;
    data = new T[_capacity];
    for(int i =0; i < size; i++) {
        data[i] = d[i];
    }
}

// copy constructor
template <typename T>
MyVector<T>::MyVector(const MyVector<T>& v0)
{
    _capacity = v0._capacity;
    _size = v0._size;
    data = new T [_capacity];
    for(int i =0; i < _size; i++) {
        data[i] = v0.data[i];
    }
}

// operator overloading, assign operator
template <typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& v0)
{
    if(this == &v0)
        return *this;
    
    _capacity = v0._capacity;
    _size = v0._size;
    for(int i =0; i< _size; i++) {
        data[i] = v0.data[i];
    }
    return *this;
}

// destructor
template <typename T>
MyVector<T>::~MyVector()
{
    delete[] data;
    data = nullptr;
    _size = 0;
    _capacity = 0;
}

// operator overloading []
template <typename T>
T& MyVector<T>::operator[](size_t index)
{
    return data[index];
}

// operator overloading ==
template <typename T>
bool MyVector<T>::operator==(const MyVector<T>& v)
{
    if (_size == v._size) {
        for(int i = 0; i < _size; i++) {
            if (data[i] != v.data[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}

// operator overloading > e.g {9,9,4,15} { 9, 9, 10, 12 }
template <typename T>
bool MyVector<T>::operator>(const MyVector<T>& v)
{
    if (_size == v._size) {
        for(int i = 0; i < _size; i++) {
            if (data[i] == v.data[i]){
                continue;
            }
            else if (data[i] > v.data[i]) {
                return true;
            }
            else
                return false;
        }
        return false;
    }
    return false;
}

// method implementation
template <typename T>
T MyVector<T>::getValue(size_t index)
{
    if (index < _size){
        return data[index];
    }
    std::cout << "index is out of range" << "\n";
    exit(0);
}

template <typename T>
void MyVector<T>::setValue(size_t index, T newValue)
{
    if (index < _capacity){
        data[index] = newValue;
    }
}

template <typename T>
void MyVector<T>::pushBack(T value)
{
    if (_size < _capacity) {
        data[_size] = value;
        _size++;
        return;
    }
    std::cout << "size reach the maximum number"<< "\n";
    return;
}

template <typename T>
void MyVector<T>::popBack()
{
    if (_size > 0) {
        _size--;
        return;
    }
    std::cout << "vector is already empty"<< "\n";
    return;
}

template <typename T>
void MyVector<T>::growVector()
{
    _capacity = _capacity * 2;
    T* temp = new T (_capacity * 2);
    for (int i = 0; i < _size; i++) {
        temp[i] = data[i];
    }
    delete [] data;
    data = temp;
    temp = nullptr;
}

template <typename T>
void MyVector<T>::setSize(size_t size)
{
    _size = size;
}

template <typename T>
void MyVector<T>::setCapacity(size_t capacity)
{
    _capacity = capacity;
}

template <typename T>
void MyVector<T>::freeVector()
{
    delete[] data;
    _size = 0;
    _capacity = 0;
}

template <typename T>
size_t MyVector<T>::getSize()
{
    return _size;
}

template <typename T>
size_t MyVector<T>::getCapacity()
{
    return _capacity;
}
#endif /* templatizeVector_hpp */
