#ifndef InputService_h
#define InputService_h

#include <vector>
#include "Datum.h"

class InputService {
 public:
   InputService();
   std::vector<Datum> readDataFromUser();

 private:

};
#endif
