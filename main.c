#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,minuman,makanan,repeat;
    start:
    printf("::=========================================================::\n");
    printf(":: > > > > > > > > RESEP MINUMAN & MAKANAN < < < < < < < < ::\n");
    printf("::=========================================================::\n");
    printf("::=                                                       =::\n");
    printf("::=                  1.RESEP MINUMAN                      =::\n");
    printf("::=                                                       =::\n");
    printf("::=                  2.RESEP MAKANAN                      =::\n");
    printf("::=                                                       =::\n");
    printf("::=========================================================::\n");
    printf("::= Masukkan pilihan anda :");
    scanf("%d",&m);
    if (m==1)
    {
        printf("::=========================================================::\n");
        printf(":: > > > > > > > > PILIH RESEP MINUMAN < < < < < < < < < < ::\n");
        printf("::=========================================================::\n");
        printf("::=                                                       =::\n");
        printf("::=                  1. Es Teh                            =::\n");
        printf("::=                  2. Es Jeruk                          =::\n");
        printf("::=                  3. Kopi Hitam                        =::\n");
        printf("::=                  4. Soda Gembira                      =::\n");
        printf("::=                  5. Infused water                     =::\n");
        printf("::=                                                       =::\n");
        printf("::=========================================================::\n");
        printf("::= Pilih Resep Yang Anda Inginkan :");
        scanf("%d",&minuman);

        switch(minuman)
        {
        case 1:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > > > RESEP ES TEH < < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 1 Teh celup                                        =::\n");
            printf("::= 2. 2 sdt Gula pasir                                   =::\n");
            printf("::= 3. 50 ml Air panas                                    =::\n");
            printf("::= 4. 100 ml Air dingin                                  =::\n");
            printf("::= 5. Es batu                                            =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1.Masukkan teh celup ke dalam gelas                   =::\n");
            printf("::= 2.Tambahkan gula pasir ke dalam gelas                 =::\n");
            printf("::= 3.Tuangkan air panas lalu aduk hingga gula larut      =::\n");
            printf("::= 4.Tambahkan air dingin kedalam teh tadi               =::\n");
            printf("::= 5.Tambahkan es batu sesuai selera                     =::\n");
            printf("::= 6.Es teh siap di sajikan                              =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
                printf("::=========================================================::\n");
                printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
                printf("::=========================================================::\n");
            break;
        case 2:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > > RESEP ES JERUK < < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 2 Buah jeruk peras                                 =::\n");
            printf("::= 2. 1 sdm Gula pasir                                   =::\n");
            printf("::= 3. 3 sdm Air panas                                    =::\n");
            printf("::= 4. Es batu                                            =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Masukkan air panas dan gula ke dalam gelas         =::\n");
            printf("::= 2. Aduk hingga larut keduanya                         =::\n");
            printf("::= 3. Belah dua jeruk dan peras jeruk tersebut           =::\n");
            printf("::= 4. Masukkan perasan jeruk kedalam gelas               =::\n");
            printf("::= 5. Aduk hingga rata                                   =::\n");
            printf("::= 6. Tambahkan es batu sesuai selera                    =::\n");
            printf("::= 7. Es jeruk siap di sajikan                           =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
                printf("::=========================================================::\n");
                printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
                printf("::=========================================================::\n");
            break;
        case 3:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > >  RESEP KOPI HITAM  < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 2 sdm Kopi bubuk                                   =::\n");
            printf("::= 2. 1 sdm Gula pasir                                   =::\n");
            printf("::= 3. 150 ml Air panas                                   =::\n");
            printf("::= 4. Gelas atau cangkir                                 =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Siapkan gelas atau cankir                          =::\n");
            printf("::= 2. Masukkan 2 sdm kopi bubuk                          =::\n");
            printf("::= 3. Masukkan 1 sdm gula pasir                          =::\n");
            printf("::= 4. Tuangkan 150 ml air panas                          =::\n");
            printf("::= 5. Aduk hingga rata                                   =::\n");
            printf("::= 6. Kopi hitam siap disajikan                          =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
                printf("::=========================================================::\n");
                printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
                printf("::=========================================================::\n");
            break;
        case 4:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > RESEP SODA GEMBIRA < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 1 Botol kecil fanta                                =::\n");
            printf("::= 2. 1 Sachet kental manis putih                        =::\n");
            printf("::= 3. 3 Sdt sirup cocopandan                             =::\n");
            printf("::= 4. Es Batu                                            =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Masukkan kental manis dan sirup kedalam gelas      =::\n");
            printf("::= 2. Setelah itu berilah es batu sesuai selera          =::\n");
            printf("::= 3. Tuang fanta ke dalam gelas                         =::\n");
            printf("::= 4. Aduk hingga rata                                   =::\n");
            printf("::= 5. Soda Gembira siap disajikan                        =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
                printf("::=========================================================::\n");
                printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
                printf("::=========================================================::\n");
            break;
        case 5:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > RESEP INFUSED WATER < < < < < < < < < ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 1/2 buah lemon                                     =::\n");
            printf("::= 2. 1/4 buah mentimun                                  =::\n");
            printf("::= 3. 450 ml air mineral                                 =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Iris tipis-tipis buah lemon                        =::\n");
            printf("::= 2. Iris tipis-tipis buah mentimun                     =::\n");
            printf("::= 3. Masukkan buah yang udah di iris ke dalam tumbler   =::\n");
            printf("::= 4. Lalu masukkan air mineral kedalam tumbler          =::\n");
            printf("::= 5. Simpan kedalam lemari es selama 1-2 jam            =::\n");
            printf("::= 6. Infused water siap disajikan                       =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
                printf("::=========================================================::\n");
                printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
                printf("::=========================================================::\n");
            break;
        default :
            printf("::=========================================================::\n");
            printf("::= MOHON MAAF PILIHAN YANG ANDA MASUKKAN TIDAK TERSEDIA  =::\n");
            printf("::=========================================================::\n");
        }
    }
    else if (m==2)
    {
        printf("::=========================================================::\n");
        printf(":: > > > > > > > > PILIH RESEP MAKANAN < < < < < < < < < < ::\n");
        printf("::=========================================================::\n");
        printf("::=                                                       =::\n");
        printf("::=                 1. Nasi Goreng                        =::\n");
        printf("::=                 2. Capcay Sayur                       =::\n");
        printf("::=                 3. Tempe Mendoan                      =::\n");
        printf("::=                 4. Bakwan                             =::\n");
        printf("::=                 5. Seblak                             =::\n");
        printf("::=                                                       =::\n");
        printf("::=========================================================::\n");
        printf("::= Pilih resep yang anda inginkan :");
        scanf("%d",&makanan);

        switch(makanan)
        {
        case 1:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > >  RESEP NASI GORENG  < < < < < < < < < ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. sepiring nasi                                      =::\n");
            printf("::= 2. 5 siung bawang putih                               =::\n");
            printf("::= 3. 1 butir telur                                      =::\n");
            printf("::= 4. 2 buah tomat                                       =::\n");
            printf("::= 5. Garam secukupnya                                   =::\n");
            printf("::= 6. Micin secukupnya                                   =::\n");
            printf("::= 7. Minyak goreng secukupnya                           =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Haluskan bawang putih                              =::\n");
            printf("::= 2. Iris tomat menjadi kecil                           =::\n");
            printf("::= 3. Panaskan wajan dan masukkan minyak secukupnya      =::\n");
            printf("::= 4. Tumis bawang yang sudah di haluskan                =::\n");
            printf("::= 5. Lalu masukkan telur sambil orak arik telur         =::\n");
            printf("::= 6. Masukkan tomat yang sudah di iris                  =::\n");
            printf("::= 7. Masukkan garam dan micin secukupnya                =::\n");
            printf("::= 8. Tumis sebentar lalu masukkan nasi                  =::\n");
            printf("::= 9. Aduk hingga tercampur rata                         =::\n");
            printf("::= 10. Jika sudah masak pindahkan nasi ke piring         =::\n");
            printf("::= 11. Nasi goreng siap di sajikan                       =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
            printf("::=========================================================::\n");
            printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
            printf("::=========================================================::\n");
            break;
        case 2:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > >  RESEP CAPCAY SAYUR  < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 300 gr pokcoy                                      =::\n");
            printf("::= 2. 1 batang wortel potng kecil-kecil                  =::\n");
            printf("::= 3. 1 butir telur                                      =::\n");
            printf("::= 4. 2 siung bawang putih cincang halus                 =::\n");
            printf("::= 5. 4 siung bawang merah cincang halus                 =::\n");
            printf("::= 6. 4 cabai rawit cincang halus                        =::\n");
            printf("::= 7. Saus tiram secukupnya                              =::\n");
            printf("::= 8. Garam dan lada secukupnya                          =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Tumis bawang putih,bawang merah,dan cabai          =::\n");
            printf("::=    tumis hingga harum                                 =::\n");
            printf("::= 2. Masukkan telur dan orak arik telur                 =::\n");
            printf("::= 3. Tambahkan air secukupnya                           =::\n");
            printf("::= 4. Masukkan wortel dan tunggu hingga 1/3 matang       =::\n");
            printf("::= 5. Masukkan pokcoy                                    =::\n");
            printf("::= 6. Masukkan saus tiram, garam dan lada secukupnya     =::\n");
            printf("::= 7. Tunggu hingga matang                               =::\n");
            printf("::= 8. Capcay sayur siap disajikan                        =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
            printf("::=========================================================::\n");
            printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
            printf("::=========================================================::\n");
            break;
        case 3:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > >   RESEP TEMPE MENDOAN   < < < < < < < < ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 500 gr tempe , iris tipis                          =::\n");
            printf("::= 2. minyak goreng                                      =::\n");
            printf("::= 3. Bumbu perendam,aduk rata :                         =::\n");
            printf("::=    -200 ml air                                        =::\n");
            printf("::=    -2 siung bawang putih, haluskan                    =::\n");
            printf("::=    -1/2 sdt ketumbar bubuk                            =::\n");
            printf("::=    -1/2 sdt garam                                     =::\n");
            printf("::= 4. Tepung Pelapis:                                    =::\n");
            printf("::=    -300 g tepung terigu                               =::\n");
            printf("::=    -2 sdm tepung kanji                                =::\n");
            printf("::=    -100 g tepung beras                                =::\n");
            printf("::=    -600 ml air                                        =::\n");
            printf("::=    -1 sdt ketumbar bubuk                              =::\n");
            printf("::=    -6 siung bawang putih, haluskan                    =::\n");
            printf("::=    -4 cm kencur, haluskan                             =::\n");
            printf("::=    -1 sdt garam                                       =::\n");
            printf("::=    -4 batang daun bawang, iris halus                  =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Lumuri tempe dengan bumbu perendam, ratakan        =::\n");
            printf("::= 2. Sisihkan selama 15 menit agar bumbu meresap        =::\n");
            printf("::= 3. Tepung pelapis:                                    =::\n");
            printf("::=    -Larutkan tepung terigu, tepung kanji dan tepung   =::\n");
            printf("::=     beras dengan air                                  =::\n");
            printf("::=    -Masukkan ketumbar, bawang putih, kencur, garam    =::\n");
            printf("::=     dan daun bawang                                   =::\n");
            printf("::=    -Aduk hingga rata                                  =::\n");
            printf("::= 4. Panaskan minyak goreng yang banyak dalam wajan     =::\n");
            printf("::= 5. Celup 1 lembar tempe dalam tepung pelapis,         =::\n");
            printf("::=    segera masukkan ke dalam minyak panas              =::\n");
            printf("::= 6. Goreng tempe hingga golden brown lalu tiriskan     =::\n");
            printf("::= 7. Tempe mendoan siap disajikan                       =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
            printf("::=========================================================::\n");
            printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
            printf("::=========================================================::\n");
            break;
        case 4:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > >  RESEP BAKWAN  < < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. 150g wortel, iris kecil                            =::\n");
            printf("::= 2. 150g kol, iris halus                               =::\n");
            printf("::= 3. 1/2 batang seledri, iris halus                     =::\n");
            printf("::= 4. 1/2 sdt merica bubuk                               =::\n");
            printf("::= 5. 1 sdt garam                                        =::\n");
            printf("::= 6. 70g tepung beras                                   =::\n");
            printf("::= 7. 1 butir telur ayam                                 =::\n");
            printf("::= 8. 150g toge / kecambah                               =::\n");
            printf("::= 9. 8 siung bawang putih, haluskan                     =::\n");
            printf("::= 10. 1 sdt penyedap                                    =::\n");
            printf("::= 11. 150 g tepung terigu                               =::\n");
            printf("::= 12. 220 ml air                                        =::\n");
            printf("::= 13. minyak goreng                                     =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Campur tepung terigu,tepung beras, penyedap,bawang =::\n");
            printf("::=    putih,garam, merica, telur dan tambahkan air       =::\n");
            printf("::= 2. Aduk semua hingga rata                             =::\n");
            printf("::= 3. Masukkan wortel, taoge, kol, dan seledri ke adonan =::\n");
            printf("::=    tepung                                             =::\n");
            printf("::= 4. Aduk semua hingga rata                             =::\n");
            printf("::= 5. Panaskan minyak di atas wajan                      =::\n");
            printf("::= 6. Ambil adonan dengan sendok sayur, lalu tuang ke    =::\n");
            printf("::=    dalam minyak                                       =::\n");
            printf("::= 7. Goreng hingga golden brown                         =::\n");
            printf("::= 8. Bakwan siap di sajikan                             =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
            printf("::=========================================================::\n");
            printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
            printf("::=========================================================::\n");
            break;
        case 5:
            printf("::=========================================================::\n");
            printf(":: > > > > > > > > > >  RESEP SEBLAK  < < < < < < < < < <  ::\n");
            printf("::=========================================================::\n");
            printf("::=                     Bahan-Bahan :                     =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Segenggam kerupuk seblak                           =::\n");
            printf("::= 2. 1/2 mie instan                                     =::\n");
            printf("::= 3. 1 pcs sosis                                        =::\n");
            printf("::= 4. 2 Batang Sawi hijau                                =::\n");
            printf("::= 5. 2 Lembar sawi putih                                =::\n");
            printf("::= 6. 1 Gelas air                                        =::\n");
            printf("::= 7. 4 sdm minyak sayur                                 =::\n");
            printf("::= Untuk bumbu:                                          =::\n");
            printf("::= 1. 2 siung bawang merah                               =::\n");
            printf("::= 2. 2 siung bawang putih                               =::\n");
            printf("::= 3. 2 buah cabe merah keriting                         =::\n");
            printf("::= 4. 7 buah cabe rawit                                  =::\n");
            printf("::= 5. 1 buah kencur ukuran kecil                         =::\n");
            printf("::= 6. garam secukupnya                                   =::\n");
            printf("::= 7. penyedap rasa secukupnya                           =::\n");
            printf("::=========================================================::\n");
            printf("::=                     Cara membuat :                    =::\n");
            printf("::= ----------------------------------------------------- =::\n");
            printf("::= 1. Rendam kerupuk seblak ke dalam air dingin sekitar  =::\n");
            printf("::=    30 menitan                                         =::\n");
            printf("::= 2. Haluskan bawang merah, bawang putih, cabe, dan     =::\n");
            printf("::=    kencur                                             =::\n");
            printf("::= 3. Potong sosis, sawi hijau, dan sawi putih           =::\n");
            printf("::= 4. Tuang minyak ke wajan, lalu tunggu hingga panas    =::\n");
            printf("::= 5. Tumis bumbu hingga harum                           =::\n");
            printf("::= 6. Masukkan telur lalu orak arik dan masukkan sosis   =::\n");
            printf("::= 7. Tuang air kedalam tumisan, lalu masukkan mie       =::\n");
            printf("::= 8. Tunggu hingga mie setengah matang                  =::\n");
            printf("::= 9. Lalu masukkan sawi hijau dan sawi putih            =::\n");
            printf("::= 10. Sambil di aduk masukkan garam dan penyedap rasa   =::\n");
            printf("::= 11. Jika sudah matang pindahkan ke dalam mangkok      =::\n");
            printf("::= 12. Seblak siap di sajikan                            =::\n");
            printf("::=========================================================::\n");
            printf("::= 1. Kembali ke menu utama                              =::\n");
            printf("::= 2. Keluar                                             =::\n");
            printf("::=========================================================::\n");
            printf("::= Masukkan pilihan anda 1 atau 2 :");
            scanf("%d",&repeat);
            if(repeat == 1)
                goto start;
            else
            printf("::=========================================================::\n");
            printf(":: > > > Terimakasih Telah Menggunakan Program Saya < < <  ::\n");
            printf("::=========================================================::\n");
            break;
        default :
            printf("::=========================================================::\n");
            printf("::= MOHON MAAF PILIHAN YANG ANDA MASUKKAN TIDAK TERSEDIA  =::\n");
            printf("::=========================================================::\n");
        }
    }
    return 0;
}
