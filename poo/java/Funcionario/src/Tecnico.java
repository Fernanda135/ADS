public class Tecnico extends Funcionario {
    private double bonus = 100;

    @Override
    public double ganhoAnual() {
        return (super.getSalario() + bonus) * 12;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }
}
