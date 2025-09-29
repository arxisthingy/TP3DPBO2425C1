from Trainmark import Trainmark
from SaranaKereta import SaranaKereta
from typing import Optional

# Gerbong class inheriting from SaranaKereta
class Gerbong(SaranaKereta):
    def __init__(self, kode_sarana: str = "", nama_sarana: str = "", berat_sarana: int = 0, tipe_bogie: str = "", jenis_trainmark: Optional[Trainmark] = None):
        # Call parent constructor
        super().__init__(kode_sarana, nama_sarana, berat_sarana, tipe_bogie)
        self._jenis_trainmark = jenis_trainmark if jenis_trainmark is not None else Trainmark()

    # Getter and Setter for jenis_trainmark
    def get_jenis_trainmark(self) -> Trainmark: return self._jenis_trainmark
    def set_jenis_trainmark(self, trainmark: Trainmark): self._jenis_trainmark = trainmark