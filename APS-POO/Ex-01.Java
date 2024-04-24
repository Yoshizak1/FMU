package org.example;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int Perimetro=0,Area=0,B,b,L1,L2,h;
        Scanner s=new Scanner (System.in);
        System.out.println("Insira um valor da altura: ");
        h=s.nextInt();
        System.out.println("Insira um valor do lado 1: ");
        L1=s.nextInt();
        System.out.println("Insira um valor do lado 2: ");
        L2=s.nextInt();
        System.out.println("Insira um valor da base maior: ");
        B=s.nextInt();
        System.out.println("Insira um valor da base menor: ");
        b=s.nextInt();
        Perimetro=B+b+L1+L2;
        Area=((B+b)*h)/2;
        System.out.println("O resultado do perímetro é de: "+Perimetro+"cm e da área é de: "+Area+"cm^2");
    }
}
