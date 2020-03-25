#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {

  string primeira, segunda, terceira;

  cin >> primeira >> segunda >> terceira;

  if (!primeira.compare("vertebrado")) {
    if (!segunda.compare("ave")) {
      if (!terceira.compare("carnivoro")) {
        cout << "aguia" << '\n';

      }else if (!terceira.compare("onivoro")) {
        cout << "pomba" << '\n';
      }

    }else if (!segunda.compare("mamifero")) {
      if (!terceira.compare("onivoro")) {
        cout << "homem" << '\n';

      }else if (!terceira.compare("herbivoro")) {
        cout << "vaca" << '\n';
      }
    }

  }else if (!primeira.compare("invertebrado")) {
    if (!segunda.compare("inseto")) {
      if (!terceira.compare("hematofago")) {
        cout << "pulga" << '\n';

      }else if (!terceira.compare("herbivoro")) {
        cout << "lagarta" << '\n';
      }

    }else if (!segunda.compare("anelideo")) {
      if (!terceira.compare("hematofago")) {
        cout << "sanguessuga" << '\n';

      }else if (!terceira.compare("onivoro")) {
        cout << "minhoca" << '\n';
      }
    }
  }
  return 0;
}
