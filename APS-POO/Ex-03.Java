public class Quadrado {
    private double lado;
    public Quadrado(double lado) {
        this.lado = lado;
    }
    public double calcularArea() {
        return lado * lado;
    }
    public double calcularPerimetro() {
        return 4 * lado;
    }
    public double getLado() {
        return lado;
    }
    public void setLado(double lado) {
        this.lado = lado;
    }

    public static void main(String[] args) {
        Quadrado meuQuadrado = new Quadrado(5);
        double area = meuQuadrado.calcularArea();
        System.out.println("Área do quadrado: " + area);
        double perimetro = meuQuadrado.calcularPerimetro();
        System.out.println("Perímetro do quadrado: " + perimetro);
    }
}

