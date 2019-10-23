#ifndef Vector_h
#define Vector_h
class Vector {
  public:
    // constructors
    Vector();
    Vector( int size );
    ~Vector();

    int size() const { return size_; }

  private:
    int size_; // size of array
    double*  data_; // pointer to actual data!

};
#endif
