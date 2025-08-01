public class Main {

    public static void main(String[] args) {

        Conta conta1 = new Conta();
        conta1.numero = 10;
        conta1.saldo = 200.56;
        conta1.dono = "Fernanda";
        conta1.limite = 500;

        System.out.println("Dono: "+conta1.dono);
        System.out.println("Numero: "+conta1.numero);
        System.out.println("Saldo: "+conta1.saldo);
        System.out.println("Limite: "+conta1.limite);

        conta1.sacar(50);

        }

}