#include <iostream>
#include <chrono>
#include <vector>
#include <fstream>

using namespace std;
using namespace chrono;

high_resolution_clock::time_point start_timer() {
    return high_resolution_clock::now();
}

double stop_timer(high_resolution_clock::time_point start) {
    auto end = high_resolution_clock::now();
    return duration<double>(end - start).count();
}

int main() {  // Ensure this is the program entry point
  std::cout << "Benchmark started!" << std::endl;
  return 0;
}
