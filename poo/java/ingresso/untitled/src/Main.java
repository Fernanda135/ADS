public class Main {
    public static void main(String[] args) {

        Normal ingressoNormal = new Normal(50.0);
        ingressoNormal.tipoIngresso();
        ingressoNormal.imprimeValor();

        System.out.println();

        VIP ingressoVIP = new VIP(50.0, 30.0);
        ingressoVIP.imprimeValor();

        System.out.println();

        CamaroteInferior camaroteInferior = new CamaroteInferior(50.0, 20.0, "Setor A");
        camaroteInferior.imprimeValor();
        camaroteInferior.imprimeLocalizacao();

        System.out.println();

        CamaroteSuperior camaroteSuperior = new CamaroteSuperior(50.0, 50.0);
        camaroteSuperior.imprimeValor();

    }
}