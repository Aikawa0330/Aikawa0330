#include <iostream>
using namespace std;

int main(){
  double tb;
  double ls;
  double tp;

  cout << "Enter the total bill: ";
  cin >> tb;

  cout << "Enter the liquor charge: ";
    cin >> lc;

  cout << "Enter the tip percentage: ";
  cin >> tp;

  double total = tb - lc;
  cout << "Total bill without liquor charge: " << total << "\n";

  double final = total * (tp/100);
  cout << "Tip amount: " << final << "\n";

  reurn 0;
}
  
