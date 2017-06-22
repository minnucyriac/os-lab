#!/bin/bash
echo "Enter limit"
read n
echo "Enter numbers"
for (( i=0;i<n;i++ ))
do
	read arr[i]
done
for (( i=0;i<n-1;i++ ))
do
	for (( j=0;j<n-1-i;j++))
	do
		if (( ${arr[j]} > ${arr[j+1]} ))
		   then temp=${arr[j]}
			arr[j]=${arr[j+1]}
			arr[j+1]=$temp
		fi
	done
done
echo "Sorted array"
for (( i=0;i<n;i++ ))
do
	echo  ${arr[i]}
done



