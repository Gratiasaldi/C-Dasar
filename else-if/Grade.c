#include <stdio.h>

int main() {
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char grade[3]; // Changed from char* to char[] to store multi-character grade

    printf("Masukkan nilai tugas: ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS: ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS: ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (0.3 * nilai_tugas) + (0.3 * nilai_uts) + (0.4 * nilai_uas);

    if (nilai_akhir >= 85) {
        strcpy(grade, "A");
    } else if (nilai_akhir >= 80) {
        strcpy(grade, "AB");
        printf("Anda hampir mendapatkan A-\n");
    } else if (nilai_akhir >= 75) {
        strcpy(grade, "B");
        printf("Anda hampir mendapatkan B+\n");
    } else if (nilai_akhir >= 70) {
        strcpy(grade, "B");
    } else if (nilai_akhir >= 65) {
        strcpy(grade, "B-");
        printf("Anda hampir mendapatkan B-\n");
    } else if (nilai_akhir >= 60) {
        strcpy(grade, "C");
        printf("Anda hampir mendapatkan C+\n");
    } else if (nilai_akhir >= 55) {
        strcpy(grade, "C");
    } else if (nilai_akhir >= 50) {
        strcpy(grade, "D");
    } else {
        strcpy(grade, "E");
    }

    printf("Nilai akhir Anda adalah %.2f\n", nilai_akhir);
    printf("Grade Anda adalah %s\n", grade);

    return 0;
}
