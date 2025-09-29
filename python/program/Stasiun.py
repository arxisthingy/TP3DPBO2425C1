class Stasiun:
    # Constructor
    def __init__(self, kode_stasiun: str = "", nama_stasiun: str = "", tipe_stasiun: str = ""):
        self._kode_stasiun = kode_stasiun
        self._nama_stasiun = nama_stasiun
        self._tipe_stasiun = tipe_stasiun

    # Method to print Stasiun information
    def print_info(self):
        print(f"({self._kode_stasiun}) {self._nama_stasiun} - {self._tipe_stasiun}")

    # Getter and Setter methods for kode_stasiun
    def get_kode_stasiun(self) -> str: return self._kode_stasiun
    def set_kode_stasiun(self, kode: str): self._kode_stasiun = kode

    # Getter and Setter methods for nama_stasiun
    def get_nama_stasiun(self) -> str: return self._nama_stasiun
    def set_nama_stasiun(self, nama: str): self._nama_stasiun = nama

    # Getter and Setter methods for tipe_stasiun
    def get_tipe_stasiun(self) -> str: return self._tipe_stasiun
    def set_tipe_stasiun(self, tipe: str): self._tipe_stasiun = tipe