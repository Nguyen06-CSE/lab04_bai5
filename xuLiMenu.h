



#pragma one
#include<iostream>
#include<math.h>

#define TAB '\t'


using namespace std;




int fibonacci(int n);
void lietKeFibonacciNhoHonHoacBang(int n);
void lietKeNSoFibonacciDauTien(int n); 

int chonMenu(int choise, int n) {
    switch (choise) {
        case 1:
            cout << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl;
            break;
        case 2:
             lietKeFibonacciNhoHonHoacBang(n);
            break;
        case 3:
            lietKeNSoFibonacciDauTien(n);
            break;
    return 0; 
    }
}









int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void lietKeFibonacciNhoHonHoacBang(int n) {
    int a = 0, b = 1;
    cout << "Cac so Fibonacci nho hon hoac bang " << n << " la: ";
    if (n >= 0) cout << a << " ";
    if (n >= 1) cout << b << " ";
    
    while (true) {
        int c = a + b;
        if (c > n) break;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}
void lietKeNSoFibonacciDauTien(int n) {
    cout << n << " so Fibonacci dau tien la: ";
    int a = 0, b = 1;
    
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}