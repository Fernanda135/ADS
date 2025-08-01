class VIP extends Ingresso {

    double valorAdicional;

    VIP(double valor, double valorAdicional) {
        super(valor);
        this.valorAdicional = valorAdicional;
    }


    double valorVip() {
        return valor + valorAdicional;
    }

    @Override
    void imprimeValor() {
        System.out.println("Valor do ingresso VIP: R$" +  valorVip());
    }

}
