#!/bin/bash
flag=0
echo "Enter limit"
read n
echo "Enter number to be searched"
read num
echo "Enter numbers"
for (( i=1;i<=n;i++ ))
do
	read arr[i]
done

for (( i=1;i<=n;i++ ))
do
	if (( arr[i]==num))
		then	loc=$i
			flag=1
	fi
done
if (( flag==0 ))
	then echo "element absent"
else	echo element present at $loc
fi

