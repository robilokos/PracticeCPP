#include <iostream>

using namespace std;

class Record  {
public:
  string name;
  string phone_num;
  string address;
  Record(string n, string p, string a) {
    name = n;
    phone_num = p;
    address = a;
  }
  Record() {
    name = "";
    phone_num = "";
    address = "";
  }
  ~Record();
};