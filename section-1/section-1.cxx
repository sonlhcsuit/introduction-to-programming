#include <vector>
#include <cmath>

using namespace std;

int exercise001(int n) {
    int s = 0;

    for (int i = 0; i < n + 1; i++) {
        s = s + i;
    }
    return s;
}

int exercise002(int n) {
    unsigned long long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + i * i;
    }
    return sum;
}

double exercise003(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / i;
    }
    return sum;
}

double exercise004(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / (2.0 * i);
    }
    return sum;
}

double exercise005(int n) {
    double sum = 0;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (2 * i + 1);
    }
    return sum;
}

double exercise006(int n) {
    double sum;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (i * (i + 1));
    }
    return sum;
}

double exercise007(int n) {
    double sum;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + i / (i + 1);
    }

    return sum;
}

double exercise008(int n) {
    double sum = 0;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + (2 * i + 1) / (2 * i + 2);
    }

    return sum;
}

unsigned long long exercise009(int n) {
    unsigned long long product = 1;
    for (int i = 0; i < n + 1; i++) {
        product = product * i;
    }
    return product;

}

unsigned long long exercise010(double x, int n) {

    if (x == 1 || x == 0 || n == 1) return x;
    if (n == 0) return 1;
    double base = x;
    int exponent = n;
//    in this case, we consider to calculate natural number power
//    For real number implementation, checkout internet
    unsigned long long answer = 1;
    for (int i = 1; i < exponent + 1; ++i) {
        answer = answer * base;
    }
    return answer;
}

unsigned long long exercise011(int n) {
    unsigned long long sum = 0;
    long long product = 1;
    for (int i = 1; i < n + 1; i++) {
        product = product * i;
        sum = sum + product;
    }
    return sum;
}

unsigned long long exercise012(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i;
    }
    return sum;
}

unsigned long long exercise013(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = x * x;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + x_to_the_i;
        x_to_the_i = x_to_the_i * x * x;
    }
    return sum;
}

unsigned long long exercise014(int n, int x) {
    unsigned long long sum = 0;
    long long x_to_the_i = x;
    for (int i = 1; i < n + 1; i++) {
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i;
    }
    return sum;
}

long double exercise015(int n) {
    long double sum = 0;
    double denominator = 0;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator + i;
        sum = sum + 1.0 / denominator;
    }
    return sum;
}

long double exercise016(int n, double x) {
    long double sum = 0;
    double denominator = 0;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator + i;
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise017(int n, double x) {
    long double sum = 0;
    double denominator = 1;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * i;
        x_to_the_i = x_to_the_i * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise018(int n, double x) {
    long double sum = 1;
    double denominator = 1;
    double x_to_the_i = 1;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * (2 * i) * (2 * i - 1);
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

long double exercise019(int n, double x) {
    long double sum = 1 + x;
    double denominator = 1;
    double x_to_the_i = x;
    for (int i = 1; i < n + 1; i++) {
        denominator = denominator * (2 * i) * (2 * i + 1);
        x_to_the_i = x_to_the_i * x * x;
        sum = sum + x_to_the_i / denominator;
    }
    return sum;
}

vector<int> exercise020(int n) {
    vector<int> result;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int exercise021(int n) {
    long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

long long exercise022(int n) {
    long long product = 1;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            product = product * i;
        }
    }
    return product;
}

int exercise023(int n) {
    int count = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

vector<int> exercise024(int n) {
    vector<int> result;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                result.push_back(i);
            }
        }
    }
    return result;
}

long exercise025(int n) {
    long sum = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
        }
    }
    return sum;
}

long long exercise026(int n) {
    long long product = 1;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                product = product * i;
            }
        }
    }
    return product;
}

int exercise027(int n) {
    int count = 0;
    for (int i = 2; i < n + 1; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int exercise028(int n) {
//    ex 21 calculate sum of divisor (include n)
    return exercise021(n) - n;
}

int exercise029(int n) {
//    original version, loop from 1 to n (include n) (last odd divisor is the biggest one)
//    int max_odd = 1;
//    for (int i = 1; i < n + 1; i++) {
//        if (n % i == 0) {
//            if (i % 2 == 0) {
//                max_odd = i;
//            }
//        }
//    }
//    return max_odd;

// inverse version, loop from n to 1 (first odd divisor is the biggest one)
    int max_odd = n;
    for (int i = n; n > 0; n--) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                max_odd = i;
                break;
            }
        }
    }
    return max_odd;
}

bool exercise030(int n) {
// perfect number is a number which sum of its divisor equal itself (exclude itself)
// example is 6
// sum  of it's divisors : 1 + 2 + 3  (exclude itself)
// ex21 already calculate sum of divisors (include n) for us. Or better choice is ex28
    return exercise028(n) == n;
}

bool exercise031(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    double limit = sqrt(n);
    for (int i = 2; i < limit; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool exercise032(int n) {
    double square_root = sqrt(n);
    int integer_square_root = (int) square_root;
    if (integer_square_root * integer_square_root == n)return true;
    return false;
}

long double exercise033(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(2 + sum);
    }
    return sum;
}


long double exercise034(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(i + sum);
    }
    return sum;
}

long double exercise035(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(n + 1 - i + sum);
    }
    return sum;
}

long double exercise036(int n) {
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sqrt(n + 1 - i + sum);
    }
    return sum;
}

long double exercise037(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    for (int i = 2; i < n + 1; i++) {
        sum = pow(sum + i, 1.0 / i);
    }
    return sum;
}

long double exercise038(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = pow(sum + i, 1.0 / (i + 1));
    }
    return sum;
}

long double exercise039(int n) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    int factorial = 1;
    for (int i = i; i < n + 1; i++) {
        factorial = factorial*i;
        sum = pow(sum + factorial, 1.0 / (i + 1));
    }
    return sum;
}

long double exercise040(int n,double x) {
//    nth root of x equals x to the 1/n
//    instead of calculating nth root of x, we calculate x to the 1/n
    long double sum = 0;
    long exponent = 1;
    for (int i = 2; i < n + 1; i++) {
        exponent = exponent*x;
        sum = sqrt(sum + exponent);
    }
    return sum;
}

