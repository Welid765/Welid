import java.util.Scanner;

public class Esercizio5 {
static public void main(String[] args) {

Scanner scanner = new Scanner(System.in);

System.out.println("inserisci il primo numero ");
int num1 = scanner.nextInt();

System.out.println("inserisci il secondo numero");
int num2 = scanner.nextInt();


System.out.println("inserisci il un simbolo");
char carattere = scanner.next().charAt(0);

if(carattere == '+')
{
    int Addizione = num1 + num2;
    System.out.println("L'addizione tra " + num1 + " e " + num2 + " è: " + Addizione);
}

if(carattere == '-')
{
    int Sottrazione = num1 - num2;
    System.out.println("La sottrazione tra " + num1 + " e " + num2 + " è: " + Sottrazione);
}

if(carattere == '*')
{
    int Moltiplicazione = num1 * num2;
    System.out.println("La moltiplicazione tra " + num1 + " e " + num2 + " è: " + Moltiplicazione);
}

if(carattere == '/')
{
    double Divisione = (double) num1 / num2;
    System.out.println("La divisione tra " + num1 + " e " + num2 + " è: " + Divisione);
}

if(carattere != '+' && carattere != '-' && carattere != '*' && carattere != '/' )
{
    System.out.println("Nessuna operazione scelta");
}

}
}











