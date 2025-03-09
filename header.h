nanti aku lengkapin tunggu nama fungsii


// Deklarasi struktur data untuk nasabah
typedef struct Nasabah {
    char nama[50];
    char layanan[30];
    struct Nasabah* next; 
} Nasabah;

// Struktur data untuk antrian pake (Queue)
typedef struct {
  // Pointer ke nasabah di depan antrian
    Nasabah* depan;
// Pointer ke nasabah di belakang antrian
    Nasabah* belakang; 
} Antrian;

// Struktur data untuk Riwayat Transaksi (Stack)
typedef struct {
    Nasabah* atas; 
    // yng ini aku buat biar  kalian nnti terapinnya pake stack jadi ambil riwayat tu lewt yng paling atas dulu baru kalian paggil di fungsi.. biarin gini aja dlu nnti aku rapihin
} Riwayat;

