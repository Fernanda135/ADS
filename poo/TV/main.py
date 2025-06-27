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
            if self.canal == 50:
                print('A tv já está no canal maximo')
            else:
                self.canal += 1
        else:
            print('A tv está desligada')


    def canal_menos(self):
        if self.ligagda:
            if self.canal == 1:
                print('A tv já está no canal minimo')
            else:
                self.canal -= 1
        else:
            print('A tv está desligada')


    def volume_mais(self):
        if self.ligagda:
            if self.volume == 100:
                print('A tv já está no volume maximo')
            else:
                self.volume += 1
        else:
            print('A tv está desligada')


    def volume_menos(self):
        if self.ligagda:
            if self.volume == 0:
                print('A tv já está no volume minimo')
            else:
                self.volume -= 1
        else:
            print('A tv está delsigada')


class ConttroleRemoto:

    def __init__(self, tv):
            self.tv = tv

    def ligar_tv(self):
        self.tv.ligar()

    def desligar_tv(self):
        self.tv.desligar()


    def canal_frente(self):
        self.tv.canal_mais()

    def canal_tras(self):
        self.tv.canal_menos()

    def aumentar_vol(self):
        self.tv.volume_mais()

    def diminuir_vol(self):
        self.tv.volume_menos()

    # def status(self):
    #     return self.tv.ligagda
    #     return self.tv.canal
    #     return self.tv.volume



tv_lg = TV(False, 1, 100)
cr = ConttroleRemoto(tv_lg)

cr.ligar_tv()
cr.canal_tras()
cr.aumentar_vol()


# print(tv_lg.ligagda)
# print(tv_lg.canal)
# print(tv_lg.volume)