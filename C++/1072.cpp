#include <iostream>

using namespace std;

int main(){
    int N, i, in = 0, out = 0;
    long int X;

    std::cin >> N;

    while ((N <= 0) || (N > 10000)){
        std::cin >> N;
    }
    for (size_t i = 0; i < N; i++){
      std::cin >> X;
      if ((X >= 10) && (X <= 20)){
        in = in + 1;
      } else{
        out = out + 1;
      }
    }
    std::cout << in << " in" << '\n';
    std::cout << out << " out" << '\n';
}
