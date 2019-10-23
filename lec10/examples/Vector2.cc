#include "Vector2.h"

Vector::Vector() {

}

Vector::Vector(int size) {
  size_ = size;
  data_ = double[size];
}


Vector::Vector(const Vector&vec) {
  size_ = vec.size_;
  data_ = vec.data_;
}
