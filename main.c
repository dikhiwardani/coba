void tampilkanHeader() {
    printf("\n");
    printf("--------------------------------------------------------------\n");
    printf("|               APLIKASI KEUANGAN KELOMPOK 10                 |\n");
    printf("|              Kalkulator Keuangan Sehari-hari               |\n");
    printf("--------------------------------------------------------------\n\n");
}

int main() {
    int pilihan;

    do {
        tampilkanHeader();
        
        printf("[1] Kalkulator Diskon Belanja\n");
        printf("[2] Kalkulator Split Bill\n");
        printf("[3] Kalkulator Bunga Tabungan\n");
        printf("[4] Kalkulator Sisa Uang Jajan\n");
        printf("[5] Keluar dari Program\n\n");
        printf(" Pilih menu (1-5): ");
        
        
        if (scanf("%d", &pilihan) !=1) {
            printf("input tidak valid! Harap masukkan angka.\n");
            while(getchar() != '\n'); 
            pilihan = 0;
            continue;
        }

        switch(pilihan) {
            case 1:
                kalkulator_diskon();
                break;
            case 2:
                splitBill();
                break;
            case 3:
                printf("Menjalankan Fitur C...\n");
                break;
            case 4:
                printf("Menjalankan Fitur C...\n");
                break;
            case 5:
                printf("Terima kasih telah menggunakan Aplikasi Keuangan Kelompok 10\n");
                printf("Semoga membantu mengelola keuanganmu yaa\n\n");
                break;
            default:
                printf("\n Pilihan tidak valid! Silakan pilih angka 1-5.\n");
        }
    } while(pilihan != 5);

    return 0;
}
void bungaTabunganSederhana(){
    float saldoAwal, bungaBulanan, totalUang, totalBunga;

    printf("\n===============================================\n");
    printf("     KALKULATOR BUNGA TABUNGAN SEDERHANA \n");
    printf("===============================================\n");
    
    printf("Masukan Saldo Awal (Rp):");
    scanf("%f", &saldoAwal );
        while (saldoAwal <= 0) {    
            printf("[ERROR] Saldo awal harus lebih dari 0!\n");
            printf("Masukan Saldo Awal (Rp):");
            scanf("%f", &saldoAwal );
        }
    
    printf("Masukan Persentase Bunga Bulanan (%):");
    scanf("%f", &bungaBulanan);
        while (bungaBulanan < 0 || bungaBulanan > 100) {
                printf("[ERROR] Persentase bunga bulanan harus antara 0 - 100!\n");
                printf("Masukan Persentase Bunga Bulanan (%):");
                scanf("%f", &bungaBulanan);    
        }
    totalBunga = saldoAwal * (bungaBulanan / 100);
    totalUang = totalBunga + saldoAwal;
    
    printf("\n===============================================\n");
    printf("     KALKULATOR BUNGA TABUNGAN SEDERHANA \n");
    printf("===============================================\n");
    
    printf("Saldo Awal                       = Rp %2.lf\n", saldoAwal);
    printf("Persentase Bunga Bulanan         = %2.lf%\n", bungaBulanan);
    printf("Total Bunga Bulanan yang didapat = Rp %2.lf\n", totalBunga);
    printf("Total Uang                       = Rp %2.lf\n", totalUang);
}