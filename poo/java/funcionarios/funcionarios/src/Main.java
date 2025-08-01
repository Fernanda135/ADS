
public class Main {
    public static void main(String[] args) {

    Funcionario func1 = new Funcionario();

    func1.nome = "Ana";
    func1.salario = 2500;
    func1.dep = "Admnistração";
    func1.rg = "123-456-789-10";
    func1.dtEnt = "13/09/2020";

        System.out.println("---------------------------------------");
        System.out.println("Nome: "+ func1.nome);
        System.out.println("Salario: "+func1.salario);
        System.out.println("Departamento: "+func1.dep);
        System.out.println("RG: "+func1.rg);
        System.out.println("Data de Entrada: "+func1.dtEnt);
        System.out.println("---------------------------------------");
        func1.calculaGanhoAnual();
        System.out.println("---------------------------------------");
        func1.receberAumento(1550.75);
        func1.calculaGanhoAnual();


    }
}