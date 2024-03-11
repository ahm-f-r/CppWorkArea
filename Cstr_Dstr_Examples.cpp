#include <iostream>

using namespace std;

class CstrEx0 {    
  public: 
    CstrEx0(int i, int j = 0, string k = "xx") {
      index = i; 
      value = j;
      name = k;
      show();
    }
    void show(){
      cout << "Name: " << name
          << ", Idx: " << index
          << ", Val: " << value << endl;
    }
  private:
    int value;
    int index;
    string name;
};

void StartMsg(string banner = ""){
  cout << "\n\t" << banner << "\t\n" << endl;
}

void Blank(){
  cout << "\n" << endl;
}

void CstrExamples() {
  StartMsg("Constructor: Example 1");
  CstrEx0 p0(1, 99, "P0");
  CstrEx0 p1(2);
  CstrEx0 p2 = 3;
}

int main() {
  CstrExamples();
  return 0;
}
