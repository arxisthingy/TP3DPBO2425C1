from Gerbong import Gerbong
from Trainmark import Trainmark

# GerbongBarang class inheriting from Gerbong
class GerbongBarang(Gerbong):
    def __init__(self, kode_sarana: str = "", nama_sarana: str = "", berat_sarana: int = 0, tipe_bogie: str = "", jenis_trainmark: Trainmark = None, kapasitas_angkut: int = 0, tipe_kargo: str = ""):
        # Call parent constructor
        super().__init__(kode_sarana, nama_sarana, berat_sarana, tipe_bogie, jenis_trainmark)
        self._kapasitas_angkut = kapasitas_angkut
        self._tipe_kargo = tipe_kargo

    # Method to print GerbongBarang information
    def print_info(self):
        print(f"\n=== Info Gerbong Barang ({self.get_kode_sarana()}) {self.get_nama_sarana()} ===")
        print(f"Berat Sarana: {self.get_berat_sarana()} kg")
        print(f"Tipe Bogie: {self.get_tipe_bogie()}")
        print(f"Jenis Trainmark: {self.get_jenis_trainmark().getKodeTrainmark()}, Kecepatan Maks: {self.get_jenis_trainmark().getKecepatanMaks()} km/h")
        print(f"Kapasitas Angkut: {self._kapasitas_angkut} kg")
        print(f"Tipe Kargo: {self._tipe_kargo}")

    # Getter and Setter methods for kapasitas_angkut
    def get_kapasitas_angkut(self) -> int: return self._kapasitas_angkut
    def set_kapasitas_angkut(self, kapasitas: int): self._kapasitas_angkut = kapasitas

    # Getter and Setter methods for tipe_kargo
    def get_tipe_kargo(self) -> str: return self._tipe_kargo
    def set_tipe_kargo(self, tipe: str): self._tipe_kargo = tipe