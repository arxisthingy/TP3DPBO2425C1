from Mesin import Mesin
from SaranaKereta import SaranaKereta
from typing import Optional

# Lokomotif class inheriting from SaranaKereta
class Lokomotif(SaranaKereta):
    def __init__(self, kode_sarana: str = "", nama_sarana: str = "", berat_sarana: int = 0, tipe_bogie: str = "", jenis_mesin: Optional[Mesin] = None, konfigurasi_gandar: str = "", jenis_motor_traksi: str = ""):
        # Call parent constructor
        super().__init__(kode_sarana, nama_sarana, berat_sarana, tipe_bogie)
        self._jenis_mesin = jenis_mesin if jenis_mesin is not None else Mesin()
        self._konfigurasi_gandar = konfigurasi_gandar
        self._jenis_motor_traksi = jenis_motor_traksi

    # Method to print Lokomotif information
    def print_info(self):
        print(f"\n=== Info Lokomotif ({self.get_kode_sarana()}) {self.get_nama_sarana()} ===")
        print(f"Berat Sarana: {self.get_berat_sarana()} kg")
        print(f"Tipe Bogie: {self.get_tipe_bogie()}")
        print(f"Jenis Mesin: {self._jenis_mesin.get_nama_mesin()}, Daya: {self._jenis_mesin.get_daya_mesin()} HP, Silinder: {self._jenis_mesin.get_silinder()}")
        print(f"Konfigurasi Gandar: {self._konfigurasi_gandar}")
        print(f"Jenis Motor Traksi: {self._jenis_motor_traksi}")

    # Getter and Setter methods for jenis_mesin
    def get_jenis_mesin(self) -> Mesin: return self._jenis_mesin
    def set_jenis_mesin(self, mesin: Mesin): self._jenis_mesin = mesin

    # Getter and Setter methods for konfigurasi_gandar
    def get_konfigurasi_gandar(self) -> str: return self._konfigurasi_gandar
    def set_konfigurasi_gandar(self, konfigurasi: str): self._konfigurasi_gandar = konfigurasi

    # Getter and Setter methods for jenis_motor_traksi
    def get_jenis_motor_traksi(self) -> str: return self._jenis_motor_traksi
    def set_jenis_motor_traksi(self, jenis: str): self._jenis_motor_traksi = jenis