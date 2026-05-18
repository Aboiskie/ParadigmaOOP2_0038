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

// Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        cout << "Rekening Syariah: Tidak ada potongan admin." << endl;
    }
};

// Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        saldo -= 15000;
        cout << "Rekening Konvensional: Potongan admin Rp 15.000" << endl;
    }
};

// Rekening Premium
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "Rekening Premium: Bebas biaya admin." << endl;
        } else {
            saldo -= 50000;
            cout << "Rekening Premium: Potongan admin Rp 50.000" << endl;
        }
    }
};

int main() {

    // Pointer base class
    RekeningBank* rekening1 = new RekeningSyariah(5000000);
    RekeningBank* rekening2 = new RekeningKonvensional(5000000);
    RekeningBank* rekening3 = new RekeningPremium(8000000);
    RekeningBank* rekening4 = new RekeningPremium(15000000);

    