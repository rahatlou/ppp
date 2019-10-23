#ifndef Vector_h
#define Vector_h
class Vector {
  public:
  // constructors
    Vector();
    Vector( int size );
    Vector( const Vector& );

  private:
    int size_; // size of array
    double[size_]  data_; // actual data

};
#endif
