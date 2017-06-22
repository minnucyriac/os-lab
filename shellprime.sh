#!/bin/bash
echo "enter limit"
read n
echo "enter elemenets"
for (( i=0;i<n;i++))
do
	read a[i]
done

echo "prime numbers are"
for ((i=0;i<n;i++))
do
	f=0
	if ((a[i]/2 ==1))
	then	echo ${a[i]}
	f=1
	fi
	
	for ((j=2;j<=a[i]/2 && f==0;j++))
	do
	if((a[i]%j==0))
	then  f=1
	fi
	done

if ((f==0))
then echo ${a[i]}
fi

done

