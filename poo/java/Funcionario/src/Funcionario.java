public class Funcionario {

    private String nome;
    private double salario;

    public double ganhoAnual() {
        return this.salario * 12;
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome + "\nSalario: " + salario);
    }

    public double getSalario() {
        return salario;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
}
