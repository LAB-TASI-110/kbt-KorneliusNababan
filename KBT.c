#include <stdio.h>

int main() {
    char nama[50];
    char tujuan[50];
    char tanggal[20];
    char jam[10];
    int jenisBus;
    int kursi;

    // 1. Input Nama
    printf("=== Sistem Ticketing KBT ===\n");
    printf("Masukkan Nama Anda: ");
    scanf("%s", nama);

    // 2. Input Tujuan
    printf("Masukkan Tujuan Perjalanan: ");
    scanf("%s", tujuan);

    // 3. Input Tanggal
    printf("Masukkan Tanggal (dd-mm-yyyy): ");
    scanf("%s", tanggal);

    // 4. Input Jam
    printf("Masukkan Jam (hh:mm): ");
    scanf("%s", jam);

    // 5. Pilih Jenis Bus
    do {
        printf("Pilih Jenis Bus:\n");
        printf("1. Executive\n");
        printf("2. Ekonomi\n");
        printf("Masukkan pilihan (1/2): ");
        scanf("%d", &jenisBus);

        if (jenisBus != 1 && jenisBus != 2) {
            printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (jenisBus != 1 && jenisBus != 2);

    // 6. Pilih Kursi
    if (jenisBus == 1) {
        do {
            printf("Pilih Nomor Kursi (1-11): ");
            scanf("%d", &kursi);
            if (kursi < 1 || kursi > 11) {
                printf("Nomor kursi tidak valid! Silakan coba lagi.\n");
            }
        } while (kursi < 1 || kursi > 11);
    } else {
        do {
            printf("Pilih Nomor Kursi (1-15): ");
            scanf("%d", &kursi);
            if (kursi < 1 || kursi > 15) {
                printf("Nomor kursi tidak valid! Silakan coba lagi.\n");
            }
        } while (kursi < 1 || kursi > 15);
    }

    // 7. Output Tiket
    printf("\n=== Tiket Koperasi Bintang Tapanuli ===\n");
    printf("Nama       : %s\n", nama);
    printf("Tujuan     : %s\n", tujuan);
    printf("Tanggal    : %s\n", tanggal);
    printf("Jam        : %s\n", jam);
    printf("Jenis Bus  : %s\n", (jenisBus == 1) ? "Executive" : "Ekonomi");
    printf("Nomor Kursi: %d\n", kursi);
    printf("=======================================\n");

    return 0;
}