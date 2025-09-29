from Gerbong import Gerbong
from Trainmark import Trainmark

class GerbongPenumpang(Gerbong):
    def __init__(self, kode_sarana: str = "", nama_sarana: str = "", berat_sarana: int = 0, tipe_bogie: str = "", jenis_trainmark: Trainmark = None, kapasitas_penumpang: int = 0, kelas_layanan: str = ""):
        # Call parent constructor
        super().__init__(kode_sarana, nama_sarana, berat_sarana, tipe_bogie, jenis_trainmark)
        self._kapasitas_penumpang = kapasitas_penumpang
        self._kelas_layanan = kelas_layanan

    # Method to print GerbongPenumpang information
    def print_info(self):
        print(f"\n=== Info Gerbong Penumpang ({self.get_kode_sarana()}) {self.get_nama_sarana()} ===")
        print(f"Berat Sarana: {self.get_berat_sarana()} kg")
        print(f"Tipe Bogie: {self.get_tipe_bogie()}")
        print(f"Jenis Trainmark: {self.get_jenis_trainmark().getKodeTrainmark()}, Kecepatan Maks: {self.get_jenis_trainmark().getKecepatanMaks()} km/h")
        print(f"Kapasitas Penumpang: {self._kapasitas_penumpang} orang")
        print(f"Kelas Layanan: {self._kelas_layanan}")

    # Getter and Setter methods for kapasitas_penumpang
    def get_kapasitas_penumpang(self) -> int: return self._kapasitas_penumpang
    def set_kapasitas_penumpang(self, kapasitas: int): self._kapasitas_penumpang = kapasitas

    # Getter and Setter methods for kelas_layanan
    def get_kelas_layanan(self) -> str: return self._kelas_layanan
    def set_kelas_layanan(self, kelas: str): self._kelas_layanan = kelas