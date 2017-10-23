#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

int ADD(int a, int b)
 { 
  return a + b;
 }
int SUB(int a, int b)
 { 
  return a - b;
 }
int MUL(int a, int b)
 { 
  return a * b; 
 }
double DIV(double a, int b) 
 {
  double rez;
  rez = a / b;
  return rez;
 }
int MOD(int a, int b) 
 {
  cout << "Module" << endl;
  int t;
  cin >> t;
  return ((a - b) % t);
 }
int OR(int a, int b) 
 { 
  return a & b; 
 }
int ROR(int a) 
 { 
  return a >> 1; 
 }
int ROL(int a) 
 { 
  return a << 1; 
 }
int AND(int a, int b) 
 { 
  return a | b;
 }
int NOT(int a) 
 {
  return !a;
 }
double POW(double a, double b)
 {
  if (b > 0) 
    {
     for (int i = 0, j = a; i < b - 1; i++) a *= j;
     return a;
    }
  else if (b < 0) 
    {
     for (int i = 0, j = a; i < (b + 1) * (-1); i++) a *= j;
     return 1 / a;
    } 
  else
  return 1;
}

int main() {
  char m;
  do 
   {
    cout << "calc" << endl;
    int a, b;
    char operation;
    cout << "Operation: + - * / % ^ ! & | < >" << endl;
    cin >> operation;
    if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/') && (operation != '%') && (operation != '^') && 
    (operation != '!') && (operation != '&') && (operation != '|') && (operation != '<') && (operation != '>'))  
     {
      cout << "It is not correct. Repeat please." << endl;
     }
    else 
     {
      cin >> a;
      if ((operation != '!') && (operation != '<') && (operation != '>')) 
        {
         cin >> b;
        }
     }
    switch (operation) {
     case '+':
       cout << ADD(a, b) << endl;
       break;
     case '*':
       cout << MUL(a, b) << endl;
       break;
     case '/':
       if (b != 0)
         cout << DIV(double(a), b) << endl;
       else
         cerr << "Error!" << endl;
       break;
     case '%':
       cout << MOD(a, b) << endl;
       break;
     case '^':
       cout << POW(a, b) << endl;
       break;
     case '<':
       cout << ROL(a) << endl;
       break;
     case '>':
       cout << ROR(a) << endl;
       break;
     case '!':
       cout << NOT(!a) << endl;
       break;
     case '|':
       cout << AND(a, b) << endl;
       break;
     case '&':
       cout << OR(a, b) << endl;
       break;
     default:
       cerr << "Error!" << endl;
    }
    cout << "Repeat? (p/n)" << endl;
    cin >> m;
   } 
  while (m == 'p');
return 0;
}
