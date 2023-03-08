// A simple program that computes the square root of a number

#include <iostream>
#include <string>

#include "TutorialConfig.h"

// should we include the MathFunctions header?
#ifdef USE_MYMATH
#  include "MathFunctions.h"
#endif

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double input_value = std::stod(argv[1]);

  // which square root function should we use?
#ifdef USE_MYMATH
  const double output_value = mysqrt(input_value);
#else
  const double output_value = sqrt(input_value);
#endif

  std::cout << "The square root of 2222 " << input_value << " is " << output_value << std::endl;
  return 0;
}
