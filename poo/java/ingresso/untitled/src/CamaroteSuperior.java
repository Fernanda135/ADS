class CamaroteSuperior extends VIP {

    String localizacao;

    CamaroteSuperior(double valor, double valorAdicional) {
        super(valor, valorAdicional);
        this.localizacao = localizacao;
    }

    String getLocalizacao() {
        return localizacao;
    }

    void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }

    void imprimeLocalizacao() {
        System.out.println("Localização do Camarote Superior: " + localizacao);
    }

    @Override
    void imprimeValor() {
        System.out.println("Valor do ingresso Camarote Superior: R$" + valorVip());
    }

}
