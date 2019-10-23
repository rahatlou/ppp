#include "Vector3.h"

#include <iostream>
using std::cout;
using std::endl;

Vector::Vector() {
  cout << "Vector::Vector() called" << endl;
  size_ = 0;
  data_ = 0; // null pointer

}

Vector::Vector(int size) {
  cout << "Vector::Vector(" << size << ") called" << endl;
  size_ = size;
  data_ = new double[size]; // dynamically allocated memory!
}

Vector::~Vector() {
  cout << "Vector::~Vector() called" << endl;
   delete[] data_;
}
