#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Deklarasi fungsi untuk menghitung volume kubus
float volumeKubus(float s);

// Deklarasi fungsi untuk menghitung volume balok
float volumeBalok(float p, float l, float t);

// Deklarasi fungsi untuk menghitung volume limas
float volumeLimas(float p, float l, float t);

// Deklarasi fungsi untuk menghitung volume prisma
float volumePrisma(float p, float l, float t);

// Deklarasi fungsi untuk menghitung volume tabung
float volumeTabung(float r, float t);

// Deklarasi fungsi untuk menghitung volume kerucut
float volumeKerucut(float r, float t);

// Deklarasi fungsi untuk menghitung volume bola
float volumeBola(float r);

// Deklarasi fungsi untuk menghitung luas permukaan kubus
float luasPermukaanKubus(float s);

// Deklarasi fungsi untuk menghitung luas permukaan balok
float luasPermukaanBalok(float p, float l, float t);

// Deklarasi fungsi untuk menghitung luas permukaan limas
float luasPermukaanLimas(float p, float l, float t);

// Deklarasi fungsi untuk menghitung luas permukaan prisma
float luasPermukaanPrisma(float p, float l, float t);

// Deklarasi fungsi untuk menghitung luas permukaan tabung
float luasPermukaanTabung(float r, float t);

// Deklarasi fungsi untuk menghitung luas permukaan kerucut
float luasPermukaanKerucut(float r, float t);

// Deklarasi fungsi untuk menghitung luas permukaan bola
float luasPermukaanBola(float r);

int main()
{
    // Deklarasi variabel
    char ch;
    int pilihan;
    float p, l, t, s, r;

    while (1)
    {
        // Tampilan menu
        system("cls");
        printf("\t\t\t==Menghitung Keliling dan Luas Bidang Ruang==\t\t\t");
        printf("\n1.\tKubus\n2.\tBalok\n3.\tLimas\n4.\tPrisma\n5.\tTabung\n6.\tKerucut\n7.\tBola\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            system("cls");
            printf("Masukkan sisi: ");
            scanf("%f", &s);
            printf("Volume kubus: %f\n", volumeKubus(s));
            printf("Luas permukaan kubus: %f\n", luasPermukaanKubus(s));
            break;
        case 2:
            system("cls");
            printf("Masukkan panjang: ");
            scanf("%f", &p);
            printf("Masukkan lebar: ");
            scanf("%f", &l);
            printf("Masukkan tinggi: ");
            scanf("%f", &t);
            printf("Volume balok: %f\n", volumeBalok(p, l, t));
            printf("Luas permukaan balok: %f\n", luasPermukaanBalok(p, l, t));
            break;
        case 3:
            system("cls");
            printf("Masukkan panjang alas: ");
            scanf("%f", &p);
            printf("Masukkan lebar alas: ");
            scanf("%f", &l);
            printf("Masukkan tinggi limas: ");
            scanf("%f", &t);
            printf("Volume limas: %f\n", volumeLimas(p, l, t));
            printf("Luas permukaan limas: %f\n", luasPermukaanLimas(p, l, t));
            break;
        case 4:
            system("cls");
            printf("Masukkan panjang alas: ");
            scanf("%f", &p);
            printf("Masukkan lebar alas: ");
            scanf("%f", &l);
            printf("Masukkan tinggi prisma: ");
            scanf("%f", &t);
            printf("Volume prisma: %f\n", volumePrisma(p, l, t));
            printf("Luas permukaan prisma: %f\n", luasPermukaanPrisma(p, l, t));
            break;
        case 5:
            system("cls");
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &t);
            printf("Volume tabung: %f\n", volumeTabung(r, t));
            printf("Luas permukaan tabung: %f\n", luasPermukaanTabung(r, t));
            break;
        case 6:
            system("cls");
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Masukkan tinggi kerucut: ");
            scanf("%f", &t);
            printf("Volume kerucut: %f\n", volumeKerucut(r, t));
            printf("Luas permukaan kerucut: %f\n", luasPermukaanKerucut(r, t));
            break;
        case 7:
            system("cls");
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);
            printf("Volume bola: %f\n", volumeBola(r));
            printf("Luas permukaan bola: %f\n", luasPermukaanBola(r));
            break;
        default:
            system("cls");
            printf("Pilihan tidak tersedia!\n");
            break;
        }

        while (1)
        {
            printf("Kembali ke menu? (enter M/m): ");
            printf("Keluar? (enter E/e): ");
            scanf("%c", &ch);
            if (ch == 'M' || ch == 'm')
            {
                break;
            }
            else if (ch == 'E' || ch == 'e')
            {
                return 0;
            }
            else
            {
                printf("Pilihan tidak tersedia!\n");
                continue;
            }
        }
    }

    return 0;
}

// Implementasi fungsi untuk menghitung volume kubus
float volumeKubus(float s)
{
    return s * s * s;
}

// Implementasi fungsi untuk menghitung volume balok
float volumeBalok(float p, float l, float t)
{
    return p * l * t;
}

// Implementasi fungsi untuk menghitung volume limas
float volumeLimas(float p, float l, float t)
{
    return (p * l * t) / 3;
}

// Implementasi fungsi untuk menghitung volume prisma
float volumePrisma(float p, float l, float t)
{
    return p * l * t;
}

// Implementasi fungsi untuk menghitung volume tabung
float volumeTabung(float r, float t)
{
    return 3.14 * r * r * t;
}

// Implementasi fungsi untuk menghitung volume kerucut
float volumeKerucut(float r, float t)
{
    return (3.14 * r * r * t) / 3;
}

// Implementasi fungsi untuk menghitung volume bola
float volumeBola(float r)
{
    return (4 * 3.14 * r * r * r) / 3;
}

// Implementasi fungsi untuk menghitung luas permukaan kubus
float luasPermukaanKubus(float s)
{
    return 6 * s * s;
}

// Implementasi fungsi untuk menghitung luas permukaan balok
float luasPermukaanBalok(float p, float l, float t)
{
    return 2 * ((p * l) + (p * t) + (l * t));
}

// Implementasi fungsi untuk menghitung luas permukaan limas
float luasPermukaanLimas(float p, float l, float t)
{
    return (p * l) + (p * sqrt((t * t) + ((p * p) / 4))) + (l * sqrt((t * t) + ((l * l) / 4)));
}

// Implementasi fungsi untuk menghitung luas permukaan prisma
float luasPermukaanPrisma(float p, float l, float t)
{
    return 2 * ((p * l) + (p * t) + (l * t));
}

// Implementasi fungsi untuk menghitung luas permukaan tabung
float luasPermukaanTabung(float r, float t)
{
    return 2 * 3.14 * r * (r + t);
}

// Implementasi fungsi untuk menghitung luas permukaan kerucut
float luasPermukaanKerucut(float r, float t)
{
    return 3.14 * r * (r + sqrt((t * t) + (r * r)));
}

// Implementasi fungsi untuk menghitung luas permukaan bola
float luasPermukaanBola(float r)
{
    return 4 * 3.14 * r * r;
}
