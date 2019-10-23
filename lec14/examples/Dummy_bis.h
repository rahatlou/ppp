#ifndef Dummy_h_
#define Dummy_h_

template< typename  T >
class Dummy {
  public:
    Dummy(const T& data);
    ~Dummy();
    void print() const;

  private:
    T* data_;
};
#endif
