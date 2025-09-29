class SaranaKereta:
    # Constructor
    def __init__(self, kode_sarana: str = "", nama_sarana: str = "", berat_sarana: int = 0, tipe_bogie: str = ""):
        self._kode_sarana = kode_sarana
        self._nama_sarana = nama_sarana
        self._berat_sarana = berat_sarana
        self._tipe_bogie = tipe_bogie

    # Getter and Setter methods for kode_sarana
    def get_kode_sarana(self) -> str: return self._kode_sarana
    def set_kode_sarana(self, kode: str):self._kode_sarana = kode

    # Getter and Setter methods for nama_sarana
    def get_nama_sarana(self) -> str: return self._nama_sarana
    def set_nama_sarana(self, nama: str): self._nama_sarana = nama

    # Getter and Setter methods for berat_sarana
    def get_berat_sarana(self) -> int: return self._berat_sarana
    def set_berat_sarana(self, berat: int): self._berat_sarana = berat

    # Getter and Setter methods for tipe_bogie
    def get_tipe_bogie(self) -> str: return self._tipe_bogie
    def set_tipe_bogie(self, tipe: str): self._tipe_bogie = tipe