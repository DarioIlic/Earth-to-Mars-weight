#include <iostream>

int main() {
  double weight_on_Earth;
  double weight_on_Mars;
  std::cout << "Enter the weight of an item: ";
  std::cin >> weight_on_Earth; 
  weight_on_Mars = (weight_on_Earth / 9.81) * 3.711;
  std::cout << "Weight of the item on Mars is " << weight_on_Mars << "\n";
}
