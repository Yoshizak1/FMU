class Paciente {
    private String nome;
    private int matricula;
    private String remedios;
    public Paciente(String nome, int matricula, String remedios) {
        this.nome = nome;
        this.matricula = matricula;
        this.remedios = remedios;
    }
    public static void main(String[] args) {
        Paciente paciente = new Paciente("Maria", 123456, "Paracetamol, Dipirona");
        System.out.println("Nome do paciente: " + paciente.nome);
        System.out.println("Matrícula do paciente: " + paciente.matricula);
        System.out.println("Remédios do paciente: " + paciente.remedios);
    }
}
public class Main {
    public static void main(String[] args) {
        Paciente.main(args);
    }
}
