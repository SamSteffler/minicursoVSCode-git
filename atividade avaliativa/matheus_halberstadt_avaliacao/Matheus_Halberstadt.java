// Matheus Gelatti Halberstadt

import java.util.Scanner;

public class Matheus_Halberstadt {
    static double num1, num2;

    public static void operacoes(double n1, double n2) {
        System.out.println("A resultado da soma é " + (n1 + n2));

        if(n1>=n2) {
            System.out.println("A diferença entre o maior e o menor é " + (n1-n2));
        } else {
            System.out.println("A diferença entre o maior e o menor é " + (n2-n1));
        }

        System.out.println("A média dos dois números é " + ((n1 + n2)/2.0));

        if(n1>=n2) {
            System.out.println("O resto da divisão entre os dois números é " + (n1%n2));
        } else {
            System.out.println("O resto da divisão entre os dois números é " + (n2%n1));
        }
    }

    public static void main(String args[]) {
        try (Scanner usuario = new Scanner(System.in)) {

        System.out.println("Digite o primeiro número: ");
        num1 = usuario.nextDouble();

        System.out.println("Digite o segundo número: ");
        num2 = usuario.nextDouble();

        operacoes(num1, num2);
        }
    }
}