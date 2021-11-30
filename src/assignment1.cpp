/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jose Malave
 */
//ex01

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard

  if (x%2 == 0){
    cout << x << " Is an even number" ;
  }
  else{
    cout << x << " Is an odd number" ;
  }
  return 0;
} 