# Trainmark Class
class Trainmark:
    # Constructor
    def __init__(self, kodeTrainmark='', kecepatanMaks=0):
        self.kodeTrainmark = kodeTrainmark
        self.kecepatanMaks = kecepatanMaks

    # Getter and Setter for kodeTrainmark
    def getKodeTrainmark(self): return self.kodeTrainmark
    def setKodeTrainmark(self, kodeTrainmark): self.kodeTrainmark = kodeTrainmark

    # Getter and Setter for kecepatanMaks
    def getKecepatanMaks(self): return self.kecepatanMaks
    def setKecepatanMaks(self, kecepatanMaks): self.kecepatanMaks = kecepatanMaks

    