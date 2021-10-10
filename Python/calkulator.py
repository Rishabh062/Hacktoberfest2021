from math import *
def pemBuka():
    print("--"*24)
    print("\t\tZolan Calculator")
    print("--"*24)

def isiProgram():
    angka1 = float(input("Masukkan Angka Pertama : "))
    angka2 = float(input("Masukkan Angka Kedua : "))
    print("Pilih Operasi Perhitungan")
    print("1. Penjumlahan\t2. Pengurangan\n3. Perkalian\t4. Pembagian")
    operasi = input("Masukkan pilihan : ")
    if operasi=="1":
        print("Hasilnya adalah ",angka1+angka2)
        perUlangan()
   
    elif operasi=="2":
        print("Hasilnya adalah ",angka1-angka2)
        perUlangan()
     
    elif operasi=="3":
        print("Hasilnya adalah ",angka1*angka2)
        perUlangan()
        
    else:
        print("Hasilnya adalah ",angka1/angka2)
        perUlangan()
 


def perUlangan():
    print("Apakah anda ingin menggunakan kalkulator ini lagi? y/n")
    ulang = input("Masukkan pilihan : ")
    if ulang is ("y" or "Y"):
        isiProgram()
    else:
        print("--"*24)
        print("\tTerima Kasih Sudah Menggunakan Zolan Calculator")
        print("--"*24)

      


pemBuka()
isiProgram()
