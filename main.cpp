#include<iostream>
using namespace std;

struct buku {
    string id;
    string judul,pengarang, penerbit,warna;
    int harga;
};

buku data_buku[20]; int jmlBuku=0;

void Input_Data(buku Book[], int j) {
    j++;
    cout<<endl;
    cout<<"ID Buku      : ";cin>>Book[j].id;
    cout<<"Judul Buku   : ";cin>>Book[j].judul;
    cout<<"Pengarang    : ";cin>>Book[j].pengarang;
    cout<<"Penerbit     : ";cin>>Book[j].penerbit;
    cout<<"Warna        : ";cin>>Book[j].warna;
    cout<<"harga        : ";cin>>Book[j].harga;
}

int Search_Data (buku book_1[], string id_search) {
    for (int i=1; i<jmlBuku; i++) {
        if (book_1[i].id == id_search) {
            return i;
        }
    }
    return -1;
}

void View_Data (buku Book[], int jum_buku) {
    if (jum_buku!=0) {
        for (int i=1; i<=jum_buku; i++) {
            cout<<"ID Buku   : "<<Book[i].id<<endl;
            cout<<"Judul Buku: "<<Book[i].judul<<endl;
            cout<<"Pengarang : "<<Book[i].pengarang<<endl;
            cout<<"Penerbit  : "<<Book[i].penerbit<<endl;
            cout<<"Warna     : "<<Book[i].warna<<endl;
            cout<<"Harga     : "<<Book[i].harga<<endl;
            cout<<endl;
        }
    }
}

void Edit_Data (buku Book[]) {
    string cari_buku; int no_buku;
    cout<<"Masukkan ID Buku yang ingin di Edit : ";cin>>cari_buku;
    no_buku=Search_Data(data_buku, cari_buku);
    if (no_buku!=-1) {
        cout<<"Buku Ditemukan "<<endl<<endl;
        cout<<"Judul Buku : ";cin>>Book[no_buku].judul;
        cout<<"Pengarang  : ";cin>>Book[no_buku].pengarang;
        cout<<"Penerbit   : ";cin>>Book[no_buku].penerbit;
        cout<<"Warna      : ";cin>>Book[no_buku].warna;
        cout<<"Harga      : ";cin>>Book[no_buku].harga;
        cout<<endl;
    }
    else {cout<<"Buku tidak ditemukan ";
        cout<<endl;
    }
}

int main () {
    string pil;

    cout<<"Menu \n";
    cout<<"1. Input Data \n";
    cout<<"2. View Data \n";
    cout<<"3. Edit Data \n";
    cout<<"4. Keluar "<<endl;

    while (pil != "4") {
        cout<<"pilihan Anda : ";cin>>pil;

        if (pil=="1") {
            Input_Data(data_buku,jmlBuku);
            jmlBuku++;
            cout<<endl;
        }
        else if (pil=="2") {
            View_Data(data_buku,jmlBuku);
        }
        else if (pil=="3") {
            Edit_Data(data_buku);
        }
        else if (pil!="4") {
            cout<<"Salah memasukan menu"<<endl;
        }
    };
    return 0;
}
