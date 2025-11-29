//Daspro-Project

void dashboard() {
    int masuk = 0, keluar = 0;

    for (int i = 0; i < total; i++) {
        if (strcmp(data[i].jenis, "Masuk") == 0)
            masuk += data[i].jumlah;
        else
            keluar += data[i].jumlah;
    }

    printf("\n--- DASHBOARD RINGKAS ---\n");
    printf("Total pemasukan   : %d\n", masuk);
    printf("Total pengeluaran : %d\n", keluar);
    printf("Saldo akhir       : %d\n", saldo);
}
