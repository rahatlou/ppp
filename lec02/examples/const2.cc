// const2.cpp

int main() {

   int a = 1;
   int * const b = &a; // const pointer to int

   int c = 3;
   b = &c; // assign new value to c

   return 0;
}
