#ifndef Vector_h
#define Vector_h
class Vector {
  public:
    // constructors
    Vector(int size  = 0);
    ~Vector();

    int size() const { return size_; }

    // read-only access
    double operator[](int index) const;

    // allow modifcation by client
    double& operator[](int index);

    // assigment operator
    const Vector& operator=(const Vector& rhs);

    //bool operator==(const Vector& rhs) const;


  private:
    bool validIndex(int index) const;

    int size_; // size of array
    double*  data_; // pointer to actual data!
};
#endif
