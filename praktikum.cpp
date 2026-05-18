#include <iostream>
using namespace std;

// Abstraksi Base Class
class RekeningBank {
protected:
    double saldo;

public:
    RekeningBank(double s) {
        saldo = s;
    }

    virtual void potongAdmin() = 0; // Fungsi virtual murni

    virtual void tampilSaldo() {
        cout << "Saldo akhir: Rp " << saldo << endl;
    }

    virtual ~RekeningBank() {}
};

