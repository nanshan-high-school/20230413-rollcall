#include <iostream>
#include <vector>
using namespace std;

int main() {
  int numbers, Average, total;
  total = 0;
  numbers = 0;
  vector<int> ave(0);
  
  do {
    cin >> numbers;
    ave.push_back(numbers);
  } while (numbers != -1);

  ave.pop_back();

  for (int i = 0; i < ave.size(); i++) {
    total += ave[i];
  }

  cout << total / ave.size();
}