#!/bin/bash
echo "Enter number"
read num
flag=0
if (( $num==0 || $num==1 ))
	then echo " non prime"
else
	for (( i=2;i<=num/2;i++ ))
	 do
		n=$(($num%i))
		if (( $n==0 ))
			then flag=1
		fi
       	done
	if (( flag==0 ))
		then echo "prime"
	else 
		echo "non prime"
	fi
fi 

