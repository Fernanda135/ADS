//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {

        Funcionario f1 = new Tecnico();
        f1.setNome("Ana");
        f1.setSalario(1000);
        f1.exibirDados();
        System.out.println(f1.ganhoAnual());

        Funcionario f2 = new Funcionario();
        f2.setSalario(1000);
        System.out.println(f2.ganhoAnual());

    }
}