public class PoupaBanco {
    private String numeroConta;
    private String nomeTitular;
    private double saldo;

    public PoupaBanco(String numeroConta, String nomeTitular) {
        this.numeroConta = numeroConta;
        this.nomeTitular = nomeTitular;
        this.saldo = 10000;
    }

    public void deposito(double valor) {
        saldo += valor;
        System.out.println("Depósito de " + valor + " realizado com sucesso.");
    }

    public void saque(double valor) {
        if (valor > saldo) {
            System.out.println("Saldo insuficiente para realizar o saque.");
        } else {
            saldo -= valor;
            System.out.println("Saque de " + valor + " realizado com sucesso.");
        }
    }

    public double getSaldo() {
        return saldo;
    }

    public String getNumeroConta() {
        return numeroConta;
    }

    public String getNomeTitular() {
        return nomeTitular;
    }

    public static void main(String[] args) {
        PoupaBanco minhaConta = new PoupaBanco("12345", "Fulano de Tal");

        System.out.println("Saldo inicial: " + minhaConta.getSaldo());

        minhaConta.deposito(1000);
        System.out.println("Saldo após depósito: " + minhaConta.getSaldo());
       
        minhaConta.saque(500);
        System.out.println("Saldo após saque: " + minhaConta.getSaldo());
    }
}
