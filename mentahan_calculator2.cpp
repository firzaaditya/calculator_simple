#include <iostream> // file header

using namespace std; // fungsi khusus/wajib yang harus ada atau di tambahkan jika menggunakan file header <iostream>

int main() {
  float a,b,hasil; // deklarasi variable a,b,hasil
  int aritmatika; // deklarasi intergeer variable dengan nama aritmatika

  cout << "-- Selamat datang di Program Kalkulator Sederhana --\n" << endl; // title Program
  cout << "Masukan Nilai Pertama : "; // inputan pertama
  cin >> a;

  cout << "\nPilihan Operator : " << endl;
  cout << "\n1. [+]\n2. [-]\n3. [/]\n4. [*]" << endl; // tampilan menu operator yang tersedia

  cout << "\nMasukan Pilihan Operator : ";
  cin >> aritmatika; // inputan pilih operator 1,2,3,4

  cout << "\nMasukan Nilai Kedua : ";
  cin >> b; // inputan kedua
  cin.ignore(1, '\n');

  switch (aritmatika) {
    case 1: // operator pilihan 1 yaitu [+]
      hasil = a + b;
      cout << "\nHasil dari " << a << " + " << b << " = " << hasil << endl;
      break; // menghentikan program , agar tidak melanjutkan ke case selanjutnya

    case 2: // operator pilihan 2 yaitu [-]
      hasil = a - b;
      cout << "\nHasil dari " << a << " - " << b << " = " << hasil << endl;
      break; // menghentikan program , agar tidak melanjutkan ke case selanjutnya

    case 3: // operator pilihan 3 yaitu [/]
      hasil = a / b;
      cout << "\nHasil dari " << a << " / " << b << " = " << hasil << endl;
      break; // menghentikan program , agar tidak melanjutkan ke case selanjutnya

    case 4: // operator pilihan 4 yaitu [*]
      hasil = a * b;
      cout << "\nHasil dari " << a << " * " << b << " = " << hasil << endl;
      break; // menghentikan program , agar tidak melanjutkan ke case selanjutnya

    default: // jika pilihan operator salah
      cout << "\nOperator tidak di temukan , Tolong isi Operator yang tersedia Pada Pilihan !" << endl;
      break; // jika pada default penggunaan break bisa di tambahkan bisa tidak
  }

  cin.get();
  return 0;
}

/*
  Creator : Firza Aditya Ardiansyah
  IG : faxzyyy
  IDE : Atom
  Compiler : MinGW
  Project : Simple Calculator with Function Switch Case
*/
