#include <vector.hpp>
#include <exception>

Vector::Vector(){
    size_ = 0;
    data_ = new int[size_];
}

Vector::Vector(const int size){
    if(size < 0) {
        throw std::exception();
    }
    size_ = size;
    data_ = new int[size_];
}

Vector::Vector(const Vector& obj){
    size_ = obj.size_;
    data_ = obj.data_;
}

int Vector::getSize(){
    return size_;
}

void Vector::setSize(int size){
    int* newVector = new int[size];
    for(int i = 0; i < size_; ++i){
        newVector[i] = data_[i];
    }
    size_ = size;
    data_ = newVector;
}

int* Vector::getData(){
    return data_;
}

void Vector::setData(int* data){
    data_ = data;
}

int& Vector::operator[](const int i){
    return data_[i];
}