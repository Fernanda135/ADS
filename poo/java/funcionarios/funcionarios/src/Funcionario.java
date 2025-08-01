public class Funcionario {

    String nome;
    String dep;
    double salario;
    String dtEnt;
    String rg;

    void receberAumento(double aumento) {
        aumento += this.salario;
        System.out.println("Salario de "+this.salario+" foi reajustado para: "+aumento);
        this.salario += aumento;
    }

    void calculaGanhoAnual() {
        System.out.println("Seu ganho anual foi de: "+ (this.salario*12));
    }

}
