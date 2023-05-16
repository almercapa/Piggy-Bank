#include <iostream>
#include <string>
#include <iomanip>
#include "GetData.h"
using namespace std;

int main() {
  string name;
  int q, d, n, p, weeks;
  double qtotal, dtotal, ntotal, ptotal;
  double total, average, yearsaving;
  double findTotal(double qtotal, double dtotal, double ntotal, double ptotal);
  double savingsRate(double total, double weeks);
  double inAYear(double average);
  cout << "Name: ";
  getline(cin, name);
  do {
    cout << "Quarters: ";
  } while (!(getValidInt(q)) || q < 0);
  do {
    cout << "Dimes: ";
  } while (!(getValidInt(d)) || d < 0);
  do {
    cout << "Nickels: ";
  } while (!(getValidInt(n)) || n < 0);
  do {
    cout << "Pennies: ";
  } while (!(getValidInt(p)) || p < 0);
  do {
    cout << "Weeks saved: ";
  } while (!(getValidInt(weeks)) || weeks < 0);

  qtotal = q * 0.25;
  dtotal = d * 0.1;
  ntotal = n * 0.05;
  ptotal = p * 0.01;
  total = findTotal(qtotal, dtotal, ntotal, ptotal);
  average = savingsRate(total, weeks);
  yearsaving = inAYear(average);
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);

  cout << "\n\n\n";
  cout << "Owner: " << name << endl;
  cout << "Quarters: " << setw(9) << q << setw(10) << "$" << setprecision(2) << qtotal << endl;
  cout << "Dimes: " << setw(12) << d << setw(10) << "$" << setprecision(2) << dtotal << endl;;
  cout << "Nickels: " << setw(10) << n << setw(10) << "$" << setprecision(2) << ntotal << endl;;
  cout << "Pennies: " << setw(10) << p << setw(10) << "$" << setprecision(2) << ptotal << endl << endl;

  cout << "Total: $" << setprecision(2) << total << endl;
  cout << name << ", you're earning an average of $" << setprecision(2) << average << " per year!\n"; 
  cout << "You're on track to be earning about $" << setprecision(2) << yearsaving << " this year!";
} 

double findTotal(double qtotal, double dtotal, double ntotal, double ptotal) {
  double t;
  t = qtotal + dtotal + ntotal + ptotal;
  return t;
}

double savingsRate(double total, double weeks) {
  double average;
  average = total / weeks;
  return average;
}

double inAYear(double average) {
  double yearsaving;
  yearsaving = average * 52;
  return yearsaving;
}
