// A simple program that computes the square root of a number
#ifdef USE_SECTION_ONE
#include "SectionOne.h"
#endif


#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

#include "Introduction-to-programming-config.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
  const double inputValue = std::stod(argv[1]);

  // convert input to double
  #ifdef USE_SECTION_ONE
    const double outputValue = mysqrt(inputValue);
  #else
    const double outputValue = sqrt(inputValue);
  #endif
  return 0;
}
