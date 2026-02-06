PROGRAM Analisis_Teks

DEKLARASI:
    teks: string
    cari: string

FUNGSI func1(fungsi1: string):
    // Menampilkan analisis teks
    TAMPILKAN "kalimat yang kamu masukkan: "
    UNTUK setiap karakter i DALAM fungsi1:
        TAMPILKAN i
    AKHIR UNTUK
    TAMPILKAN baris_baru
    
    TAMPILKAN "panjang karakter kalimatmu: " + panjang(fungsi1)
    
    spasi ← 0
    kata ← 0
    dalamkata ← false
    
    UNTUK setiap karakter i DALAM fungsi1:
        JIKA i ≠ ' ' MAKA:
            JIKA dalamkata == false MAKA:
                kata ← kata + 1
                dalamkata ← true
            AKHIR JIKA
        SELAIN ITU:
            dalamkata ← false
            spasi ← spasi + 1
        AKHIR JIKA
    AKHIR UNTUK
    
    TAMPILKAN "spasi pada kalimatmu berjumlah: " + spasi
    TAMPILKAN "jumlah kata pada kalimatmu sebanyak: " + kata
AKHIR FUNGSI

FUNGSI func2(fungsi2: string):
    // Menampilkan teks dengan spasi diganti underscore
    TAMPILKAN "kalimatmu saat dipisah spasi dan underscore: "
    UNTUK setiap karakter i DALAM fungsi2:
        JIKA i == ' ' MAKA:
            i ← '_'
        AKHIR JIKA
        TAMPILKAN i + " "
    AKHIR UNTUK
    TAMPILKAN baris_baru
AKHIR FUNGSI

FUNGSI func3(fungsi3: string) → string:
    // Menyensor kata-kata terlarang
    larangan[] ← ["burik", "dekil", "kucel", "bebal", "culas", "pelit", 
                  "sombong", "angkuh", "lebay", "alay", "cupu", "culun", 
                  "kudet", "dungu", "pandir", "senga", "songong", "rempong", 
                  "bacot", "jablay"]
    
    // Konversi semua karakter ke huruf kecil
    UNTUK setiap karakter kecil DALAM fungsi3 (dengan referensi):
        kecil ← huruf_kecil(kecil)
    AKHIR UNTUK
    
    // Cari dan ganti kata terlarang dengan asterisk
    UNTUK setiap kata DALAM larangan:
        pos ← cari_posisi(fungsi3, kata)
        SELAMA pos ≠ tidak_ditemukan:
            ganti(fungsi3, pos, panjang(kata), string_asterisk(panjang(kata)))
            pos ← cari_posisi(fungsi3, kata)
        AKHIR SELAMA
    AKHIR UNTUK
    
    KEMBALIKAN fungsi3
AKHIR FUNGSI

FUNGSI ft3(tf3: string):
    // Wrapper untuk menampilkan hasil penyensoran
    TAMPILKAN "nyoba teks larangan: " + func3(tf3)
AKHIR FUNGSI

FUNGSI func4(input: string, cariinput: string):
    // Mencari semua posisi substring
    JIKA cariinput kosong MAKA:
        TAMPILKAN "kata pencarian tidak boleh kosong"
        KELUAR dari fungsi
    AKHIR JIKA
    
    posisi ← cari_posisi(input, cariinput)
    
    JIKA posisi ≠ tidak_ditemukan MAKA:
        TAMPILKAN "kata yang kamu masukkan ditemukan diposisi index ke: "
        SELAMA posisi ≠ tidak_ditemukan:
            TAMPILKAN posisi
            posisi ← posisi + panjang(cariinput)
            posisi ← cari_posisi(input, cariinput, posisi)
            JIKA posisi ≠ tidak_ditemukan MAKA:
                TAMPILKAN ", "
            AKHIR JIKA
        AKHIR SELAMA
    SELAIN ITU:
        TAMPILKAN "kata yang kamu cari tidak ditemukan"
    AKHIR JIKA
AKHIR FUNGSI

FUNGSI func5(spasi: string):
    // Menormalkan spasi berlebihan
    sp ← true
    TAMPILKAN "merapikan spasi yang kebanyakan: "
    
    UNTUK setiap karakter i DALAM spasi:
        JIKA i ≠ ' ' MAKA:
            TAMPILKAN i
            sp ← false
        SELAIN ITU:
            JIKA sp == false MAKA:
                TAMPILKAN ' '
                sp ← true
            AKHIR JIKA
        AKHIR JIKA
    AKHIR UNTUK
    TAMPILKAN baris_baru
AKHIR FUNGSI

FUNGSI func6(input: string):
    // Menghitung frekuensi huruf
    huruf[26] ← {0}  // Array untuk 26 huruf alfabet
    
    UNTUK setiap karakter i DALAM input:
        i ← huruf_kecil(i)
        JIKA i >= 'a' DAN i <= 'z' MAKA:
            index ← nilai_ASCII(i) - nilai_ASCII('a')
            huruf[index] ← huruf[index] + 1
        AKHIR JIKA
    AKHIR UNTUK
    
    UNTUK i ← 0 SAMPAI 25:
        JIKA huruf[i] > 0 MAKA:
            TAMPILKAN karakter('a' + i) + ": " + huruf[i]
        AKHIR JIKA
    AKHIR UNTUK
AKHIR FUNGSI

FUNGSI func7(tukar: string) → string:
    // Membalik karakter dalam setiap kata
    start ← 0
    
    UNTUK i ← 0 SAMPAI panjang(tukar):
        JIKA i == panjang(tukar) ATAU tukar[i] == ' ' MAKA:
            end ← i - 1
            left ← start
            right ← end
            
            SELAMA left < right:
                tukar_posisi(tukar[left], tukar[right])
                left ← left + 1
                right ← right - 1
            AKHIR SELAMA
            
            start ← i + 1
        AKHIR JIKA
    AKHIR UNTUK
    
    KEMBALIKAN tukar
AKHIR FUNGSI

PROGRAM UTAMA:
    TAMPILKAN "silahkan masukkan sebuah kalimat: "
    BACA teks (seluruh baris)
    
    PANGGIL func1(teks)
    PANGGIL func2(teks)
    PANGGIL ft3(teks)
    PANGGIL func5(teks)
    PANGGIL func6(teks)
    TAMPILKAN "Kalimat setelah swap: " + func7(teks)
    
    TAMPILKAN "ketikkan kalimat yang kamu cari: "
    BACA cari (seluruh baris)
    
    PANGGIL func4(teks, cari)
    
    KEMBALIKAN 0
AKHIR PROGRAM
