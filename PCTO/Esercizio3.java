import java.util.Scanner;

public class Esercizio3 {
static public void main(String[] args) {

Scanner scanner = new Scanner(System.in);

System.out.println("inserisci il primo numero ");
int num1 = scanner.nextInt();

System.out.println("inserisci il csecondo numero");
int num2 = scanner.nextInt();

int Risultato = num1 * num2;

  System.out.println("La moltiplicazione tra " + num1 + " e " + num2 + " è: " + Risultato);

scanner.close();
}
}

