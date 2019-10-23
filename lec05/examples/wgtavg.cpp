// wgtavg.cc
#include <vector>

#include "Datum.h" // data objects
#include "InputService.h" // class dedicated to handle input of data
#include "Calculator.h" // implements various algorithms
#include "Result.h" // how is Result different from Datum ?

int main() {

  InputService input;
  std::vector<Datum> dati = input.readDataFromUser();

  Calculator calc;
  calc.setData( dati );

  Result r1 = calc.weightedAverage();
  Result r2 = calc.arithmeticAverage();
  Result r3 = calc.geometricAverage();
  Result r4 = calc.fancyAverage();

  r1.display();

  return 0;
}
