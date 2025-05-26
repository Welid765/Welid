
class MioThread extends Thread {
    public MioThread(String nome) {
        super(nome);
    }

    @Override
    public void run() {
        System.out.println("Esecuzione del thread tramite ereditarietà: " + getName());
    }
}

class MioRunnable implements Runnable {
    private String nome;

    public MioRunnable(String nome) {
        this.nome = nome;
    }

    @Override
    public void run() {
        System.out.println("Esecuzione del thread tramite Runnable: " + nome);
    }
}

public class TestThread {
    public static void main(String[] args) {
        // Creazione e avvio di un'istanza di MioThread
        MioThread mioThread = new MioThread("ThreadEreditato");
        mioThread.start();

        // Creazione e avvio di un'istanza di MioRunnable tramite Thread
        MioRunnable mioRunnable = new MioRunnable("ThreadRunnable");
        Thread threadRunnable = new Thread(mioRunnable);
        threadRunnable.start();

        // Creazione e avvio di un thread utilizzando un'espressione lambda
        Thread threadLambda = new Thread(() -> System.out.println("Esecuzione del thread tramite lambda"));
        threadLambda.start();
    }
}
