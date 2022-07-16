/*
Nama  : I Gede Indra Adnyana
NIM   : 210040014
Hari  : Jumat
Judul : Program Pendaftaran Mahasiswa Baru
*/

#include <iostream>
#include <list>
#include <conio.h>
using namespace std;

//deklarasi variabel
string mahasiswa[1000]; //Penggunaan Array
string nama;
char gender[10], no_wa[20], kota[20];
char ulang, lagi;
int umur, jurusan, angka;
short pilihan;
short lastest_index = 0;
float nilai_ijazah;
bool daftar = false;

//Untuk Hiasan menggunakan Procedure dan While Loop
void myFunction() {
    int h = 0;
    while(h < 73){
    cout << "="; h++;
    }
    cout << endl;
}

//Untuk Hiasan menggunakan Procedure dan For Loop
void hiasan() {
    for (int i = 0; i < 73; i++) {
        cout << "-";
    }
    cout << endl;
}

//Procedure untuk memasukkan nama mahasiswa
void input_name (string nama) {
    mahasiswa[lastest_index] = nama;
    lastest_index = lastest_index + 1;
}

//Procedure untuk menambahkan nama mahasiswa
void tambah_name (string name) {
    mahasiswa[lastest_index] = name;
    lastest_index = lastest_index + 1;
}

//Procedure untuk menampilkan mahasiswa yang telah mendaftar
void data_mahasiswa(string nama) {
    daftar = false;
    for (int i = 0; i <= 999; i++) {
        if (mahasiswa[i] == nama) {
            daftar = true;
        }
    }
    if (daftar == true) {
        cout << "Mahasiswa atas nama " << nama;
        cout << " telah terdaftar \n";
    } else {
        cout << "Mahasiswa atas nama " << nama;
        cout << " tidak terdaftar ! \n";
    }
}

//Prosedure untuk
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//Penggunaan Function dengan tipe data String
string data() {
    string kalimat = "Terima Kasih, Data Anda Berhasil Diproses... \n";
    return kalimat;
}

//Penggunaan Function Binary Search dengan tipe data Integer
int binarySearch(int nilai_tes[], int l, int r, int angka) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (nilai_tes[mid] == angka)
            return mid;
        if (nilai_tes[mid] > angka)
            return binarySearch(nilai_tes, l, mid - 1, angka);
        return binarySearch(nilai_tes, mid + 1, r, angka);
    }
    return -1;
}

void pause(){
	printf("\n[Tekan keyboard apa saja untuk melanjutkan....]");
	getch();
}

//Penggunaan Konstanta
const int maxMaba = 1100;

//Untuk pilihan layanan menggunakan Procedure dan Switch Case
void pilihan_layanan (short pilihan) {
    switch(pilihan) {
        case 1:
            //untuk memanggil Procedure hiasan menggunakan While Loop
            myFunction();
            cout << "\t\t    Pendaftaran Calon Mahasiswa Baru \n";
            myFunction();

            //untuk inputan data pengguna
            cout << "Nama Panggilan : ";
            cin >> nama;
            input_name(nama);
            cout << "Kabupaten/Kota Tinggal : ";
            cin >> kota;
            cout << "Jenis Kelamin(L/P) : ";
            cin >> gender;
            cout << "Umur : ";
            cin >> umur;
            cout << "Nilai Rata-rata Ijazah : ";
            cin >> nilai_ijazah;
            cout << "No. WA(+62) : ";
            cout << "+62"; cin >> no_wa;

            hiasan();
            cout << data();
            hiasan();
            cout << "Selanjutnya anda membayar biaya kuliah sesuai jurusan yang anda pilih. \n";
            hiasan();
            cout << endl;
            break;

        case 2:
            //untuk memanggil procedure hiasan menggunakan While Loop
            myFunction();
            cout << "\t\t\t Biaya Kuliah \n";
            myFunction();

            //Untuk menampilkan Tabel Biaya kuliah
            cout << "|         Jurusan        |   Registrasi   |    DPP     | \n";
            cout << "| 1. Teknologi Informasi |    Rp.400000   |  7000000   | \n";
            cout << "| 2. Sistem Informasi    |    Rp.400000   | 10000000   | \n";
            cout << "| 3. Sistem Komputer     |    Rp.400000   |  9000000   | \n";
            cout << "| 4. Bisnis Digital      |    Rp.400000   |  6000000   | \n";
            myFunction();
            cout << "Pilihlah Jurusan yang anda inginkan(1/2/3/4) \n";
            cin >> jurusan;
            cout << "Jurusan yang anda pilih adalah : ";

            //Untuk menentukan biaya kuliah dengan menggunakan If-Else
            if (jurusan==1) {
                cout << "Teknologi Informasi \n";
                hiasan();
                cout << "Total biaya yang harus anda bayar adalah Rp.7400000 \n";
            } else if (jurusan==2) {
                cout << "Sistem Informasi \n";
                hiasan();
                cout << "Total biaya yang harus anda bayar adalah Rp.10400000 \n";
            } else if (jurusan==3) {
                cout << "Sistem Komputer \n";
                hiasan();
                cout << "Total biaya yang harus anda bayar adalah Rp.9400000 \n";
            } else if (jurusan==4) {
                cout << "Bisnis Digital \n";
                hiasan();
                cout << "Total biaya yang harus anda bayar adalah Rp.6400000 \n";
            } else {
                cout << "Tidak ada (Keyword yang anda masukkan salah) \n";
                hiasan();
            }
            myFunction();
            cout << data();
            cout << "Kami akan menghubungi anda terkait metode pembayaran melalui chat WA. \n";
            myFunction();
            break;

        case 3:
            myFunction();
            cout << "\t\t Mengecek Status Mahasiswa Terdaftar \n";
            myFunction();

            cout << "Silahkan masukkan nama mahasiswa : ";
            cin >> nama;
            hiasan();
            data_mahasiswa(nama);
            hiasan();
            cout << endl;
            break;

        case 4:
            {
            myFunction();
            cout << "\t\t Mengurutkan Nilai Tes Masuk Mahasiswa \n";
            myFunction();

            //untuk inputan data pengguna
            int jml;
            cout << endl;
            cout << "Silahkan masukkan jumlah data nilai mahasiswa : ";
            cin >> jml;
            int nilai_tes[jml];
            string nama_mhs[jml];
            for (int i = 0; i < jml; i++) {
                cout << endl;
                cout << "Data Mahasiswa ke-" << i+1 << ":";
                cout << endl;
                cout << "Masukkan Nama Mahasiswa : ";
                cin >> nama_mhs[i];
                cout << "Masukkan Nilai Tes Masuk Mahasiswa : ";
                cin >> nilai_tes[i];
            }
            cout << endl;
            myFunction();
            cout << "\t\t Data Nilai Tes Masuk Calon Mahasiswa              \n";
            hiasan();
            cout << "|       Nama Mahasiswa       |       Nilai Tes       | \n";
            myFunction();

            //Mengurutkan nilai tes masuk menggunakan Selection Sort
            int i, j, min_idx;
            for(i = 0; i < jml-1; i++) {
                min_idx = i;
                for(j = i+1; j < jml; j++)
                if(nilai_tes[j] < nilai_tes[min_idx])
                    min_idx = j;
            swap(nama_mhs[min_idx], nama_mhs[i]);
            swap(nilai_tes[min_idx], nilai_tes[i]);
            }
            for(int i = 0; i < jml; i++) {
                cout << i+1 << "." << "\t";
                cout << nama_mhs[i] << "\t\t     |\t\t" << nilai_tes[i];
                cout << "\t     |";
                cout << endl;
            }
            cout << endl;
            myFunction();
            cout << "\t\t Cari Nilai Tes Masuk Mahasiswa \n";
            myFunction();

            //Metode pencarian urutan nilai tes masuk mahasiswa menggunakan Binary Search
            cout << "Silahkan masukkan nilai yang ingin anda cari : ";
            cin >> angka;
            hiasan();
            int n = sizeof(nilai_tes) / sizeof(nilai_tes[0]);
            int result = binarySearch(nilai_tes, 0, n - 1, angka);
            (result == -1)
                ? cout << angka << " tidak ditemukan"
                : cout << angka << " ditemukan di urutan yg ke " << result + 1;
            cout << endl;
            hiasan();
            break;
            }

        case 5:
            myFunction();
            cout << "\t\t Antrian Pengambilan Atribut Ospek \n";
            myFunction();

            //Data antrian pengambilan atribut ospek menggunakan Linked List
            list<string>atribut;
            string name;
            int sesi, layanan;
            char kembali;

            do {
                hiasan();
                cout << "\t\t\t Pilihan Layanan \n";
                hiasan();
                cout << "1. Tambah Antrian Mahasiswa \n";
                cout << "2. Hapus Mahasiswa yg sudah mengambil atribut \n";
                cout << "3. Tampilkan Data Antrian Mahasiswa \n";
                cout << "Masukkan pilihan anda(1/2/3) \n";
                cin >> layanan;
                if(layanan == 1) {
                    do {
                        cout << "Masukkan nama mahasiswa : ";
                        cin >> name;
                        cout << endl;
                        cout << "|  Sesi  |      Jam      | \n";
                        cout << "|   1    |  09.00-12.00  | \n";
                        cout << "|   2    |  13.00-16.00  | \n";
                        cout << "Masukkan sesi pengambilan atribut(1/2) \n";
                        cin >> sesi;
                        if(sesi == 1) {
                            atribut.push_front(name);
                        } else if (sesi == 2) {
                            atribut.push_back(name);
                        } else {
                            cout << "Pilihan sesi tidak tersedia \n";
                        }
                        cout << endl;
                        cout << "Apakah ingin menambah mahasiswa lagi ?(Y/N) \n";
                        cin >> lagi;
                        tambah_name(name);
                    }
                    while (lagi == 'Y' || lagi == 'y');
                } else if(layanan == 2) {
                    atribut.pop_front();
                    hiasan();
                    cout << "Mahasiswa yg sudah mengambil atribut telah dihapus \n";
                    hiasan();
                } else if(layanan == 3) {
                    hiasan();
                    cout << "Jumlah mahasiswa yang sedang menunggu = " << atribut.size();
                    cout << endl;
                    hiasan();
                    cout << "Nama mahasiswa : ";
                    for(list<string>::iterator it = atribut.begin(); it!= atribut.end(); ++it)
                        cout << ' ' << *it << ",";
                    cout << endl;
                    hiasan();
                }
                cout << "Kembali ke pilihan layanan ?(Y/N) \n";
                cin >> kembali;
            }
            while (kembali == 'Y' || kembali == 'y');
            break;
    }
}

// main application
int main() {
    bool loopterus = true;
    //Untuk menampilkan pilihan Layanan
    do {
        myFunction();
        cout << "\t\t Selamat Datang Calon Mahasiswa Baru \n";
        myFunction();
        cout << "Layanan yang tersedia \n";
        cout << "1. Pendaftaran \n";
        cout << "2. Biaya Kuliah \n";
        cout << "3. Mengecek Status Mahasiswa Terdaftar \n";
        cout << "4. Mengurutkan dan Cari Nilai Tes Masuk Mahasiswa \n";
        cout << "5. Antrian Pengambilan Atribut Ospek \n";
        cout << "0. Keluar Dari Program \n";
        cout << "Masukkan pilihan anda (1/2/3/4/5/0) \n";
        cin >> pilihan;

        if (pilihan == 0) {
            cout << "Pilihan anda => Keluar dari aplikasi\n";
            loopterus = false;
        } else {
            pilihan_layanan(pilihan);
        }
        pause();
        system("cls");
    }
    while (loopterus);

    return 0;
}
