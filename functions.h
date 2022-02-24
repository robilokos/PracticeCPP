#include <iostream>
#include <string>
#include "node.h"

using namespace std;

class Functions {
  public:
    Functions();
    int hashit(string);
    Record* create_record();
    void switch_casing();
    ~Functions();
};

Functions::Functions() {
  cout << "";
}

int Functions::hashit(string s) {
  if(s == "") return 0;
  if(s == "1") return 1;
  if(s == "2") return 2;
  if(s == "3") return 3;
  if(s == "4") return 4;
  if(s == "5") return 5;
  if(s == "6") return 6;
  if(s == "q") return -1;
  if(s == "b") return -2;
}

Record* Functions::create_record() {
  string name, phone_num, address;
  cout << "Name: ";
  cin >> name;
  cout << "Phone number: ";
  cin >> phone_num;
  cout << "Address: ";
  cin >> address;
  Record* rec = new Record(name, phone_num, address);
  return rec;
}

void Functions::switch_casing() {
  Node* record_list = nullptr;
  //TEST RECORDS
  Record* rec1 = new Record("Robi", "123", "asd");
  Record* rec2 = new Record("Rami", "234", "asd1");
  Record* rec3 = new Record("Levi", "345", "asd2");
  record_list->list_push(&record_list, rec1);
  record_list->list_push(&record_list, rec2);
  record_list->list_push(&record_list, rec3);
  //////////////
  string menu_nav = "";
  int hashed_menu_nav = hashit(menu_nav);
  
  do {
    cout << "1: Check all member in the phone book\n";
    cout << "2: Add new member to the phone book\n";
    cout << "3: Remove a member from the phone book\n";
    cout << "4: Search in phone book by name\n";
    cout << "5: Search in phone book by phone number\n";
    cout << "6: Search in phone book by address\n";
    cout << "q: Quit\n";
    cin >> menu_nav;
    hashed_menu_nav = hashit(menu_nav);
    switch(hashed_menu_nav) {
      case 1:
        do {
          record_list->print_nodes(record_list);
          cout << "1: List members again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      case 2: {
        do {
          Record* rec = create_record();
          record_list->list_push(&record_list, rec);
          cout << "2: Add member again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      }
      case 3: {
        do {
          string name;
          cout << "Name: ";
          cin >> name;
          record_list->remove_node_by_name(&record_list, name);
          cout << "3: Remove member again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      }
      case 4: {
        do {
          string name;
          cout << "Name: ";
          cin >> name;
          record_list->search_by_name(record_list, name);
          cout << "4: Search again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      }
      case 5: {
        do {
          string phone_num;
          cout << "Phone number: ";
          cin >> phone_num;
          record_list->search_by_phone_number(record_list, phone_num);
          cout << "5: Search again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      }
      case 6: {
        do {
          string address;
          cout << "Address: ";
          cin >> address;
          record_list->search_by_address(record_list, address);
          cout << "6: Search again\n";
          cout << "b: Back\n";
          cin >> menu_nav;
          hashed_menu_nav = hashit(menu_nav);
          switch(hashed_menu_nav) {
            case -2:
              break;
          }
        } while(hashed_menu_nav != -2);
        break;
      }
      case -1:
        break;
      default:
        cout << "You gave the wrong number!\n";
        break;
    } 
  } while(hashed_menu_nav != -1);
}