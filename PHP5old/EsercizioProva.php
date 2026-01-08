<TABLE>

<?php

  $number = 1; 
  $prodotto = 0;

for($i = 0; $i < 10; $i++) 
   {
     $costante = 1;
     echo "<TR>";
       for($j = 0; $j < 10; $j++)
       {
         echo "<TD>";
         $prodotto = $number * $costante;
         printf("%d", $prodotto); 
          echo "<TD>";
         $costante++;
       }
         echo "<TR>";
       $number++;
}
