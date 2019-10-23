// vect1.cc
#include <iostream>
#include <vector>
using  std::cout;
using  std::endl;
using  std::vector;

int main() {

   vector<float> v1;
   vector<double> v1;

   bool condition = true;

   cout << "insert -9999. to end data taking" << endl; 
   while(condition) {
     float x = 0.0;
     cin >> x;
     if(x == -9999.) condition = false;
      if( condition != false ) v1.push_back( x );
   }
   cout << "You inserted " << v1.size() << " values." << endl;

   for(int i=0; i< v1.size(); ++i) {
     cout << "v1[" << i << "] = " << v1[i] << endl;
   }

   for(vector<float>::const_iterator it = v1.begin(); it != v1.end(); it++) {
     cout << "*it = " << *it << endl;
   }



   return 0;
}
