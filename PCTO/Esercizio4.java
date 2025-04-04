import java.util.Scanner;

public class Esercizio4 {
static public void main(String[] args) {

Scanner scanner = new Scanner(System.in);

System.out.println("inserisci il primo numero ");
int num1 = scanner.nextInt();

System.out.println("inserisci il csecondo numero");
int num2 = scanner.nextInt();

int Moltiplicazione = num1 * num2;

double Divisione = (double) num1 / num2;

int Addizione = num1 + num2;

int Sottrazione = num1 - num2;



  System.out.println("La moltiplicazione tra " + num1 + " e " + num2 + " è: " + Moltiplicazione);
  System.out.println("La divisione tra " + num1 + " e " + num2 + " è: " + Divisione);
  System.out.println("L'addizione tra " + num1 + " e " + num2 + " è: " + Addizione);
  System.out.println("La sottrazione tra " + num1 + " e " + num2 + " è: " + Sottrazione);


scanner.close();
}
}