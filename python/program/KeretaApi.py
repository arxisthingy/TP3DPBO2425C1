from typing import List, Optional
from Lokomotif import Lokomotif
from Gerbong import Gerbong
from Stasiun import Stasiun

class KeretaApi:
    def __init__(self, kode_kereta_api: int = 0, nama_kereta_api: str = "", daftar_lokomotif: Optional[List[Lokomotif]] = None, daftar_gerbong: Optional[List[Gerbong]] = None, stasiun_asal: Optional[Stasiun] = None, stasiun_tujuan: Optional[Stasiun] = None):
        self._kode_kereta_api = kode_kereta_api
        self._nama_kereta_api = nama_kereta_api
        self._daftar_lokomotif = daftar_lokomotif if daftar_lokomotif is not None else []
        self._daftar_gerbong = daftar_gerbong if daftar_gerbong is not None else []
        self._stasiun_asal = stasiun_asal if stasiun_asal is not None else Stasiun()
        self._stasiun_tujuan = stasiun_tujuan if stasiun_tujuan is not None else Stasiun()

    # Method to print KeretaApi information
    def print_info(self):
        print(f"\n=== Info Kereta Api ({self._kode_kereta_api}) {self._nama_kereta_api} ===")
        
        print("Lokomotif:", end="")
        if not self._daftar_lokomotif:
            print(" Tidak ada lokomotif")
        else:
            print()
            for lokomotif in self._daftar_lokomotif:
                print(f"  - {lokomotif.get_nama_sarana()} ({lokomotif.get_kode_sarana()})")

        print("Gerbong:", end="")
        if not self._daftar_gerbong:
            print(" Tidak ada gerbong")
        else:
            print()
            for gerbong in self._daftar_gerbong:
                print(f"  - {gerbong.get_nama_sarana()} ({gerbong.get_kode_sarana()})")

        if not self._stasiun_asal.get_kode_stasiun() or not self._stasiun_tujuan.get_kode_stasiun():
            print("Stasiun Asal atau Stasiun Tujuan belum ditetapkan.")
            return
        else:
            print(f"Stasiun Asal: {self._stasiun_asal.get_nama_stasiun()} ({self._stasiun_asal.get_kode_stasiun()})")
            print(f"Stasiun Tujuan: {self._stasiun_tujuan.get_nama_stasiun()} ({self._stasiun_tujuan.get_kode_stasiun()})")

    # Add methods
    def add_lokomotif(self, lokomotif: Lokomotif):
        self._daftar_lokomotif.append(lokomotif)
        
    def add_gerbong(self, gerbong: Gerbong):
        self._daftar_gerbong.append(gerbong)

    def add_stasiun_asal(self, stasiun: Stasiun):
        self._stasiun_asal = stasiun
    
    def add_stasiun_tujuan(self, stasiun: Stasiun):
        self._stasiun_tujuan = stasiun

    # Getter and Setter methods for kode_kereta_api
    def get_kode_kereta_api(self) -> int: return self._kode_kereta_api
    def set_kode_kereta_api(self, kode_kereta_api: int): self._kode_kereta_api = kode_kereta_api

    # Getter and Setter methods for nama_kereta_api
    def get_nama_kereta_api(self) -> str: return self._nama_kereta_api
    def set_nama_kereta_api(self, nama_kereta_api: str): self._nama_kereta_api = nama_kereta_api

    # Getter and Setter methods for daftar_lokomotif
    def get_stasiun_asal(self) -> Stasiun: return self._stasiun_asal
    def set_stasiun_asal(self, stasiun_asal: Stasiun): self._stasiun_asal = stasiun_asal

    # Getter and Setter methods for daftar_gerbong
    def get_stasiun_tujuan(self) -> Stasiun: return self._stasiun_tujuan
    def set_stasiun_tujuan(self, stasiun_tujuan: Stasiun): self._stasiun_tujuan = stasiun_tujuan