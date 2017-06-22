#count umber of vowels
echo enter the string
  read s
len=${#s}
count=0
 while [ $len -gt 0 ]
  do
   ch=`expr $s | cut -c $len` 
    echo $ch 
   case $ch in
    [AeIiOoUuaE])
      count=$(($count+1))
   ;;
   esac
   len=$(($len-1))
  done
 echo no of vowels 
  echo $count

