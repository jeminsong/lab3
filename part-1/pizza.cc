// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @Devon-T928

#include <iostream>
double PizzaUnitPrice(double diameter, double price) {
  double radius{diameter / 2};
  double area = (3.1415926) * (radius * radius);
  double unit_price = (price / area);
  return unit_price;
}

int main() {
  double diameter{0.0};
  std::cout << "Enter pizza diameter in inches:";
  std::cin >> diameter;
  double price{0.0};
  std::cout << "Enter pizza price in dollars:";
  std::cin >> price;
  double unit_price{PizzaUnitPrice(diameter, price)};
  std::cout << "Unit price = " << unit_price << " dollars per square inch\n";
  return 0;
}