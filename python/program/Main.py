from Trainmark import Trainmark
from Mesin import Mesin
from Lokomotif import Lokomotif
from GerbongBarang import GerbongBarang
from GerbongPenumpang import GerbongPenumpang
from Stasiun import Stasiun
from KeretaApi import KeretaApi

# Function to check and print trainmarks
def check_trainmark(daftar_trainmark):
    print()
    if not daftar_trainmark:
        print("Daftar trainmark kosong.")
        return
    print("Daftar Trainmark:")
    for tm in daftar_trainmark:
        print(f"Trainmark Kode: {tm.getKodeTrainmark()}, Kecepatan Maks: {tm.getKecepatanMaks()} km/h")

# Function to check and print stasiun
def check_stasiun(daftar_stasiun):
    print()
    if not daftar_stasiun:
        print("Daftar stasiun kosong.")
        return
    print("Daftar Stasiun:")
    for stasiun in daftar_stasiun:
        stasiun.print_info()

if __name__ == "__main__":
    kereta = KeretaApi()
    # Trainmark
    trainmarkF = Trainmark('F', 120)
    trainmarkE = Trainmark('E', 100)
    trainmarkD = Trainmark('D', 90)
    trainmarkC = Trainmark('C', 80)

    daftar_trainmark = []
    check_trainmark(daftar_trainmark) # Should indicate the list is empty

    daftar_trainmark.extend([trainmarkF, trainmarkE, trainmarkD, trainmarkC])
    check_trainmark(daftar_trainmark) # Should print all trainmarks

    # Lokomotif
    lokomotif1 = Lokomotif("CC 201 89 16", "GE U18C", 78000, "BarataIndonesia CC", Mesin("GE 7FDL-8", 1950, 8), "Co-Co", "Diesel-Electric")
    lokomotif1.print_info()

    # Gerbong
    K100209 = GerbongPenumpang("K1 0 02 09", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif")
    K100209.print_info()

    # Gerbong Barang
    B00903 = GerbongBarang("B 0 09 03", "B", 32000, "Bogie K5", trainmarkE, 20000, "Bagasi & Barang Serbaguna")
    B00903.print_info()

    # Gerbong Barang 2
    GD01104 = GerbongBarang("GD 0 11 04", "Gerbong Datar", 15000, "Bogie Barber S-2", trainmarkC, 57000, "Petikemas")
    GD01104.print_info()

    # Check and print Stasiun
    daftar_stasiun = []
    check_stasiun(daftar_stasiun) # Should indicate the list is empty

    # Stasiun
    BL = Stasiun("BL", "Blitar", "Kelas Besar Tipe A")
    PSE = Stasiun("PSE", "Pasar Senen", "Kelas Besar Tipe A")
    daftar_stasiun.extend([BL, PSE])

    # Check and print Stasiun
    check_stasiun(daftar_stasiun)

    # Kereta Api
    daftar_kereta_api = []

    # Add Kereta Api
    kereta.set_kode_kereta_api(112)
    kereta.set_nama_kereta_api("Brantas")
    kereta.print_info()
    kereta.add_lokomotif(lokomotif1)
    kereta.print_info()
    kereta.add_gerbong(K100209)
    kereta.add_gerbong(GerbongPenumpang("K1 0 98 22", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif"))
    kereta.add_gerbong(GerbongPenumpang("K1 0 96 07", "K1", 40000, "Bogie K5", trainmarkE, 50, "Eksekutif"))
    kereta.add_gerbong(GerbongPenumpang("MP3 0 16 05", "MP3", 42000, "Bogie K10", trainmarkF, 14, "Eksekutif"))
    kereta.add_gerbong(GerbongPenumpang("K3 0 14 08", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"))
    kereta.add_gerbong(GerbongPenumpang("K3 0 14 09", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"))
    kereta.add_gerbong(GerbongPenumpang("K3 0 14 23", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"))
    kereta.add_gerbong(GerbongPenumpang("K3 0 14 21", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"))
    kereta.add_gerbong(GerbongPenumpang("K3 0 14 34", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"))
    kereta.add_gerbong(B00903)

    kereta.print_info()
    # Add Stasiun Asal and Tujuan
    kereta.add_stasiun_asal(BL)
    kereta.add_stasiun_tujuan(PSE)

    kereta.print_info()