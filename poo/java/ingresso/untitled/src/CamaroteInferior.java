class CamaroteInferior extends VIP {

    String localizacao;

    CamaroteInferior(double valor, double valorAdicional, String localizacao) {
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
        System.out.println("Localização do Camarote Inferior: " + localizacao);
    }

}
