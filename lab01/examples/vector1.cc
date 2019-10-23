// simple example of using class vector vector1.cc
#include <iostream>  // standard I/O
#include <cmath>  // math functions
#include <vector> // header for vector class

using namespace std;

int main() {

   vector<float> v1; // declare vector

   bool condition = true;

   cout << "insert -9999. to end data taking" << endl; 
   while(condition) {
     float x = 0.0;
     cin >> x;
     if(x == -9999.) condition = false;
      if( condition != false ) v1.push_back( x );
   }
   // access size of vector!
   cout << "You inserted " << v1.size() << " values." << endl;


   // access individual elements of vector
   for(int i=0; i< v1.size(); ++i) {
     cout << "v1[" << i << "] = " << v1[i] << endl;
   }

   // use of iterator on elements of vector
   for(vector<float>::const_iterator it = v1.begin(); it != v1.end(); it++) {
     cout << "*it = " << *it << endl;
   }



   return 0;
}
