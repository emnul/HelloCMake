#include <greeter/Greeter.h> // Namespaced include
#include <iostream>

int main() {
  std::cout << get_greeting();
#ifdef SAY_GOODBYE
  std::cout << "\nGoodbye";
#endif // SAY_GOODBYE
  return 0;
}
