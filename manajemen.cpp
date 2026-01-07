#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int jumlah = 0;

    string id[100], nama[100], jabatan[100];
    int gaji[100];

    do {
        cout << "\n===== MENU MANAJEMEN DATA KARYAWAN =====\n";
        cout << "1. Input Data Karyawan\n";
        cout << "2. Tampilkan Data Karyawan\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nInput Data Karyawan\n";
            cout << "ID Karyawan     : ";
            cin >> id[jumlah];
            cout << "Nama Karyawan   : ";
            cin >> nama[jumlah];
            cout << "Jabatan         : ";
            cin >> jabatan[jumlah];
            cout << "Gaji            : ";
            cin >> gaji[jumlah];

            jumlah++;
            cout << "Data berhasil disimpan!\n";
        }
        else if (pilihan == 2) {
            cout << "\n===== DATA KARYAWAN =====\n";

            if (jumlah == 0) {
                cout << "Belum ada data karyawan.\n";
            } else {
                for (int i = 0; i < jumlah; i++) {
                    cout << "\nKaryawan ke-" << i + 1 << endl;
                    cout << "ID      : " << id[i] << endl;
                    cout << "Nama    : " << nama[i] << endl;
                    cout << "Jabatan : " << jabatan[i] << endl;
                    cout << "Gaji    : Rp " << gaji[i] << endl;
                }
            }
        }
        else if (pilihan == 3) {
            cout << "\nProgram selesai. Terima kasih.\n";
        }
        else {
            cout << "\nPilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}