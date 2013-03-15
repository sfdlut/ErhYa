#include <iostream>
#include "singleton.hpp"

class Point : public singleton_default<Point> {
  public:
  int get() {
    return i;
  }
  Point() {
    std::cout << "well" << std::endl;
    i = 111;
  }
  int i;
};

int main() {
  //typedef singleton_default<Point> p;
  std::cout << Point::instance().get() << std::endl;
  return 0;
}
