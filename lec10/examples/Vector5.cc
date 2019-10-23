#include "Vector5.h"

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib> // prototype for exit function

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

bool
Vector::validIndex(int index) const {
  if( index < 0 || index >= size_ ) {
     cout << "bad index " << index 
          << " not in range [0:" << size_
          << "]" << endl;
     return false;
  } else {
    return true;
  }
}

double
Vector::operator[](int index) const {
  if( !validIndex(index) ) {
     std::exit( -1 ); // exit program
  } else { // good index
     return data_[index];
  }
}

double&
Vector::operator[](int index) {
  if( !validIndex(index) ) {
     std::exit( -1 ); // exit program
  } else { // good index
     return data_[index];
  }
}

const Vector&
Vector::operator=(const Vector& rhs) {
  if( &rhs == this ) {
    cout << "avoiding self assignment" << endl;
    return *this;
  }

  if(size_ != rhs.size_) {
    cout << "vectors of different size. changing from "
         << size_ << " to " << rhs.size_ << " to match rhs.size()"
         << endl;

    // delete old array of data
    delete[] data_;

    // now modify self to match the rhs
    size_ = rhs.size_;
    data_ = new double[rhs.size_];

  }


  // copy values from rhs to self
  for(int i=0; i<size_;++i) {
    data_[i] = rhs.data_[i];
  }

  // return modified self
  return *this;
}
