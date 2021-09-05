//
// Created by sonlh on 8/31/21.
//

#include "helper.h"
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_palindrome(int x) {
  string s = to_string(x);
  string t = to_string(x);
  return s == t;
}

bool is_power_of_2(int i) {
  while (i != 0) {
    if (i % 2 != 0) {
      return false;
    }
    i = i / 2;
  }
  return true;
}

bool is_power_of_3(int number) {
  while (number != 1) {
    if (number % 3 == 0) {
      number = number / 3;
    } else {
      return false;
    }
  }
  return true;
}

bool is_all_digit_odd(int i) {
  while (i != 0) {
    if ((i % 10) % 2 == 0) {
      return false;
    }
    i = i / 10;
  }
  return true;
}

bool is_power_of_5(int i) {
  while (i != 0) {
    if (i % 5 != 0) {
      return false;
    }
    i = i / 5;
  }
  return true;
}

bool is_prime(int x) {
  if (x < 2) {
    return false;
  }
  if (x < 8) {
    if (x == 2 or x == 3 or x == 5 or x == 7) {
      return true;
    }
  } else {
    for (int i = 8; i < sqrt(x); i++) {
      if (x % i == 0) {
        return false;
      }
    }
  }

  return true;
}

int gcd(int a, int b) {
  int temp = 0;
  while (a != 0) {
    temp = a;
    a = b % a;
    b = temp;
  }
  return b;
}

bool first_digit_prime_odd(int number) {
  bool flag = true;
  if (number == 2)
    return false;
  if (number == 3 || number == 5 || number == 7)
    return true;
  for (int i = 3; i < sqrt(number); i++) {
    if (number % i == 0) {
      flag = false;
      break;
    }
  }
  if (flag) {
    int f_digit = 0;
    while (number != 0) {
      f_digit = number % 10;
      number = number / 10;
    }
    if (f_digit % 2 == 0) {
      flag = false;
    }
  }

  return flag;
}

bool is_first_digit_even(int number) {
  while (number > 9) {
    number = number / 10;
  }

  return number % 2 == 0;
}

int first_digit(int n) {
  n = abs(n);
  while (n > 9) {
    n = n / 10;
  }
  return n;
}

bool is_perfect(int x) {
  int s = 0;
  for (int i = 1; i < x; i++) {
    s = s + (x % i == 0 ? i : 0);
  }
  return s == x;
}

void quicksort(vector<float> &array, int low, int high) {

  // partition
  if (high > array.size())
    return;
  if (!(low < high))
    return;

  float temp = 0;
  float pivot_value = array[high];
  int small = low - 1;

  for (int i = low; i < high; i++) {
    if (array[i] < pivot_value) {
      // swap

      small = small + 1;
      cout << array[small] << " " << array[i] << "\n";
      temp = array[small];
      array[small] = array[i];
      array[i] = temp;

      cout << array[small] << " " << array[i] << "\n";
    }
  }

  small = small + 1;
  temp = array[small];
  array[small] = array[high];
  array[high] = temp;
  cout << "wtf\n";

  cout << array[small] << " " << array[high] << "\n";
  quicksort(array, low, small - 1);
  quicksort(array, small + 1, high);
}
