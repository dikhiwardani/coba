void kalkulator_diskon() {
    float harga_awal, persentase_diskon;
    float jumlah_diskon, harga_akhir;
 
    printf("\n========================================\n");
    printf("     KALKULATOR DISKON BELANJA\n");
    printf("========================================\n");
 
    // Input harga awal
    printf("Masukkan harga awal barang (Rp): ");
    scanf("%f", &harga_awal);
 
    // Validasi harga awal
    if (harga_awal <= 0) {
        printf("[ERROR] Harga awal harus lebih dari 0!\n");
        return;
    }
 
    // Input persentase diskon
    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persentase_diskon);
 
    // Validasi persentase diskon
    if (persentase_diskon < 0 || persentase_diskon > 100) {
        printf("[ERROR] Persentase diskon harus antara 0 - 100!\n");
        return;
    }
 
    // Hitung diskon dan harga akhir
    jumlah_diskon = harga_awal * (persentase_diskon / 100);
    harga_akhir   = harga_awal - jumlah_diskon;
 
    // Tampilkan hasil
    printf("\n----------------------------------------\n");
    printf("  HASIL PERHITUNGAN:\n");
    printf("----------------------------------------\n");
    printf("  Harga Awal       : Rp %.2f\n", harga_awal);
    printf("  Diskon (%.0f%%)     : Rp %.2f\n", persentase_diskon, jumlah_diskon);
    printf("  --------------------------------\n");
    printf("  Harga yang Harus\n");
    printf("  Dibayar          : Rp %.2f\n", harga_akhir);
    printf("----------------------------------------\n");
    printf("  Kamu hemat Rp %.2f!\n", jumlah_diskon);
    printf("========================================\n\n");
}