public class Conta {

    int numero;
    String dono;
    double saldo;
    double limite;


    void sacar(double quantidade) {
        double novoSaldo = this.saldo - quantidade;
        this.saldo = quantidade;
        System.out.println("Voce sacou: " + quantidade);
        System.out.println("Saldo atual: " + novoSaldo);
    }

}
