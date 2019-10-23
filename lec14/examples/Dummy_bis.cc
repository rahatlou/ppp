#include "Dummy_bis.h"
#include<iostream>
using namespace std;

template<class T>
Dummy<T>::Dummy(const T& data) {
  data_ = new T(data);
}


template<class T>
Dummy<T>::~Dummy() {
  delete data_;
}

template<class T>
void
Dummy<T>::print() const {
  cout << "Dummy<T>::print() with type T = "
       << typeid(T).name()
       << ", *data_: " << *data_
       << endl;

}
