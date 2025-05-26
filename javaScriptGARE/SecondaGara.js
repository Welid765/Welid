forever(function () {
    // 1. Percorso lungo (60 cm): motori B e C avanti per ~2400 ms
    motors.largeBC.tank(50, 50, 2400)

    // 2. Ruota a sinistra di 90°: B fermo, C avanti ~600 ms
    motors.largeBC.tank(0, 50, 600)

    // 3. Percorso corto (25 cm): motori avanti per ~1000 ms
    motors.largeBC.tank(50, 50, 1000)

    // 4. Ruota a sinistra di 90° di nuovo
    motors.largeBC.tank(0, 50, 600)

    // 5. Percorso lungo (secondo lato lungo)
    motors.largeBC.tank(50, 50, 2400)

    // 6. Ruota a sinistra di 90°
    motors.largeBC.tank(0, 50, 600)

    // 7. Percorso corto (secondo lato corto)
    motors.largeBC.tank(50, 50, 1000)

    // 8. Ultima rotazione a sinistra di 90°
    motors.largeBC.tank(0, 50, 600)

    // 9. Stop
    motors.stopAll()

    // 10. Ferma il programma per sempre
    while (true) {
        // blocco infinito per terminare il ciclo forever
    }
})
