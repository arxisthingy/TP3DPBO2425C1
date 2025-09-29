class Mesin:
    # Constructor
    def __init__(self, nama_mesin: str = "", daya_mesin: int = 0, silinder: int = 0):
        self._nama_mesin = nama_mesin
        self._daya_mesin = daya_mesin
        self._silinder = silinder
        
    # Getter and Setter methods for nama_mesin
    def get_nama_mesin(self) -> str: return self._nama_mesin
    def set_nama_mesin(self, nama: str): self._nama_mesin = nama

    # Getter and Setter methods for daya_mesin  
    def get_daya_mesin(self) -> int: return self._daya_mesin
    def set_daya_mesin(self, daya: int): self._daya_mesin = daya

    # Getter and Setter methods for silinder
    def get_silinder(self) -> int: return self._silinder
    def set_silinder(self, sil: int): self._silinder = sil