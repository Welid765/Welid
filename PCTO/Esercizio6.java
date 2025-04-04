public class Esercizio6 {
    public static void main(String[] args) {
        String strTesto = "Cavolini di Bruxelle (-25%); Fagiolini della Nonna (-50%); Kit Kat fondente (-15%)";


        String[] prodotti = strTesto.split(";");

        for (String prodotto : prodotti) {
            System.out.println(prodotto.trim());
        }
    }
}