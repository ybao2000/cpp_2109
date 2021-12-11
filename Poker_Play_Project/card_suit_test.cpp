// #include <bits/stdc++.h> // this is only for g++
#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main() {
  _setmode(_fileno(stdout), _O_U16TEXT);
  wstring spade = L"\u2660";
  wstring heart = L"\u2661";
  wstring diamond = L"\u2662";
  wstring club = L"\u2663";
  wcout << spade << " " << heart << " " << diamond << " " << club << endl;
}
