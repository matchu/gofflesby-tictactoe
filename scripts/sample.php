<? foreach(str_split(fgets(STDIN))as$s){if(!$w){$p=='X'?$p='O':$p='X';$m[$s]=$p;foreach(str_split('123456789147258369159357',3)as$r)if($m[$r[0]].$m[$r[1]].$m[$r[2]]==$p.$p.$p)$w=$p;}}echo'Winner: '.($w?$w:'Nobody').'
';for($i=1;$i<10;$i++)echo($m[$i]?$m[$i]:' ').($i<9?$i%3?'|':'
-+-+-
':'
');
