forever(function () {
    // 1. Spostarsi da Base1 a Base2 - motori B e C avanti per 2 secondi
    motors.largeBC.tank(50, 50, 2000)

    // 2. Attendere 5 secondi
    pause(5000)

    // 3. Ruotare di 180° sul posto (B indietro, C avanti) per 1.3 secondi circa
    motors.largeBC.tank(-50, 50, 1300)

    // 4. Ritornare alla Base1 - motori B e C avanti per 2 secondi
    motors.largeBC.tank(50, 50, 2000)

    // 5. Stoppa i motori per sicurezza
    motors.stopAll()

    // 6. Ferma per sempre (per evitare che ripeta)
    while (true) {
        // non fare nulla, ciclo infinito per bloccare il forever
    }
})
