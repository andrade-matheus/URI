#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
  int C, N;
  string c1_upper, c2_upper, c1_lower, c2_lower;
  string frase;
  bool encontrou = false;

  while (std::cin >> C >> N) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(std::cin, c1_upper);
    getline(std::cin, c2_upper);

    c1_lower = c1_upper;
    c2_lower = c2_upper;

    transform(c1_lower.begin(), c1_lower.end(), c1_lower.begin(), ::tolower);
    transform(c2_lower.begin(), c2_lower.end(), c2_lower.begin(), ::tolower);

    while (N--) {
      getline(std::cin, frase);

      for (size_t i = 0; i < frase.size(); i++) {
        for (int j = 0; j < (int) c1_lower.size(); j++) {
          if (frase[i] == c1_lower[j]) {
            std::cout << c2_lower[j];
            encontrou = true;
            break;
          }else if (frase[i] == c1_upper[j]) {
            encontrou = true;
            std::cout << c2_upper[j];
            break;
          }else if (frase[i] == c2_lower[j]) {
            encontrou = true;
            std::cout << c1_lower[j];
            break;
          }else if (frase[i] == c2_upper[j]) {
            encontrou = true;
            std::cout << c1_upper[j];
            break;
          }
        }
        if (!encontrou) {
          std::cout << frase[i];
        }
        encontrou = false;
      }
      std::cout << '\n';
    }
    std::cout << '\n';
  }
  return 0;
}
