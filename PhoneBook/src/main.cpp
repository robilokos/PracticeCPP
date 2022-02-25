#include <iostream>
#include "functions.h"

using namespace std;

int main() {
  cout << "Phone book!\n";
  Functions* f = new Functions();
  f->switch_casing();
}