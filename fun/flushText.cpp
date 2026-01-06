#include <chrono>
#include <iostream>
#include <thread>

int main() {
  int color = 90;
  for (int n = 0; n < 10000; ++n) {
    std::cout << "\e[" << color << "mHello, world\e[0m\r" << std::flush;
    color = (color > 96) ? 90 : color + 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
}