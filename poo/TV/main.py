class TV:

    def __init__(self, ligada, canal, volume):
        self.ligagda = ligada
        self.canal = canal
        self.volume = volume

    def ligar(self):
        self.ligagda = True

    def desligar(self):
        self.ligagda = False

    def canal_mais(self):
        if self.ligagda:
            self.canal += 1

    def canal_menos(self):
        if self.ligagda:
            self.canal -= 1

class ConttroleRemoto:

    def __init__(self, tv):
            self.tv = tv




tv_lg = TV(False, 10, 20)
cr = ConttroleRemoto(tv_lg)

cr.tv.ligar()
cr.tv.canal_mais()

print(tv_lg.ligagda)
print(tv_lg.canal)
print(tv_lg.volume)