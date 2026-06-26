#include <greeter/Greeter.h> // Namespaced include
#include <iostream>

// Forward Declaration
void SayGoodbye();

int main() {
  std::cout << get_greeting();
#ifdef SAY_GOODBYE
  SayGoodbye();
#endif // SAY_GOODBYE
  return 0;
}
