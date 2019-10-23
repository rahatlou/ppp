#ifndef Vector_h
#define Vector_h
class Vector {
  public:
    // constructors
    Vector( int size  = 0);
    ~Vector();

    int size() const { return size_; }

    const double& operator[](int index) const;
    double& operator[](int index);


  private:
    int size_; // size of array
    double*  data_; // pointer to actual data!

};
#endif
