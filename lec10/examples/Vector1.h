class Vector {
  public:
  // constructors
    Vector();
    Vector( int size );
    Vector( const Vector& );

    // destructor
    ~Vector();

    // getters
    int size() const;
    const double& operator[](int index) const;

    //operators between Vector
    Vector operator+( const Vector& vec) const;
    Vector operator-( const Vector& vec) const;
    const Vector& operator=( const Vector& );

    // interaction with doubles
    Vector operator*( double scale) const;
    friend Vector operator*(double scale, const Vector& vec);

    // boolean operators
    bool operator==( const Vector& vec) const;
    bool operator!=( const Vector& vec) const;
    bool operator<( const Vector& vec) const;

   // I/O
   friend ostream& operator<<(ostream& os, const Vector& vec);

};
