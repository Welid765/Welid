<?php
$conn = new mysqli("localhost", "root", "", "gestionescuola104");

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

echo "Connessione riuscita!";
?>