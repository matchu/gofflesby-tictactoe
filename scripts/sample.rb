b=[]
$<.each_char{|c|$l=b[c.to_i]=$l=='X'?'O':'X'
8.times{|n|r=b.values_at(*'123456789147258369159357'[n*3,3].split(//).map(&:to_i))
r==[$l,$l,$l]&&$w=r[0]}
$w&&break}
puts'Winner: '+($w||'Nobody'),[1,4,7].map{|n|b[n..n+2].map{|z|z||' '}.join'|'}.join('
-+-+-
')
