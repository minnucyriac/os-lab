# pattern printing 

echo enter value  of n
  read n
for (( i=1;i<=n;i++ ))
 do
   for (( j=$(($n-$i));j>0;j-- ))
     do
      echo -ne " " # -ne is to print on same line
    done
   for (( k=$(($(($i*2))-1));k>0;k-- ))
    do
     echo -ne "*"
    done
echo  
 done 
