#include "Vector4.h"

#include <iostream>
using std::cout;
using std::endl;

Vector::Vector(int size) {
  cout << "Vector::Vector(" << size << ") called" << endl;
  size_ = size;
  data_ = new double[size]; // dynamically allocated memory!
  for(int i=0; i<size; ++i) {
    data_[i] = 0.;
  }
}

Vector::~Vector() {
  cout << "Vector::~Vector() called" << endl;
   delete[] data_;
}


const double&
Vector::operator[](int index) const {
  return data_[index];
}

double&
Vector::operator[](int index) {
  return data_[index];
}

