#ifndef Dummy_h_
#define Dummy_h_

#include<iostream>

template< typename  T >
class Dummy {
  public:
    Dummy(const T& data);
    ~Dummy();
    void print() const;
    static int total() { return total_; }

  private:
    T* data_;
    static int total_;
};

template<class T>
int Dummy<T>::total_ = 0;


template<class T>
Dummy<T>::Dummy(const T& data) {
  data_ = new T(data);
  total_++;
}


template<class T>
Dummy<T>::~Dummy() {
  total_--;
  delete data_;
}

template<class T>
void
Dummy<T>::print() const {
  std::cout << "Dummy<T>::print() with type T = "
       << typeid(T).name()
       << ", *data_: " << *data_
       << std::endl;
}
#endif
