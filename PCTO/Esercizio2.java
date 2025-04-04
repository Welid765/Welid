import java.util.Scanner;

public class Esercizio2 {
static public void main(String[] args) {

Scanner scanner = new Scanner(System.in);

System.out.println("inserisci il nome da stampare ");
String nome = scanner.nextLine();

System.out.println("inserisci il cognome da stampare ");
String cognome = scanner.nextLine();

System.out.println("Buona giornarnata ,signor ," +nome+ " "+cognome);

scanner.close();
}
}

