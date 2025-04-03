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

void integer_operations_benchmark() {
  auto start = start_timer();

  int sum = 0;
  for (long long i = 0; i < 1010000000; i++) sum += 1;  // 10^10 additions

  int product = 1;
  for (long long i = 0; i < 5000000000; i++) product *= 2;  // 5 * 10^9 multiplications

  int quotient = 1;
  for (long long i = 0; i < 2000000000; i++) quotient /= 2;  // 2 * 10^9 divisions

  double elapsed = stop_timer(start);
  cout << "Integer operations benchmark time: " << elapsed << " seconds" << endl;
}


int main() {  // Ensure this is the program entry point
  std::cout << "Benchmark started!" << std::endl;
  return 0;
}
