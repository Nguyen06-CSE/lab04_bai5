#include<iostream>
#include<math.h>
#include<conio.h>


using namespace std;

#include"inMenu.h"
#include"xuLiMenu.h"

int main() {
    int n, choise;
    char tiep ;

    do {
        system("cls"); 
        printMenu();
        do {
        cout << "hay nhap lua chon (1-3): ";
        cin >> choise;
        
        if (choise < 1 || choise > 3) {
            cout << "ban chon sai chuc nang, vui long nhap lai.";
        }
        
        
    } while (choise < 1 || choise > 3);
        cout << "Hay nhap so n: \n";
        cin >> n;

        chonMenu(choise, n);

        cout << "Nhap Y/y de chon chuc nang khac hoac nhan phim bat ki de ket thuc\n";
        cin >> tiep;

    } while (tiep == 'Y' || tiep == 'y');
    
    return 0;
}


