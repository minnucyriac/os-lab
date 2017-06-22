echo "enter elements"
read n
echo "enter"
for((i=0;i<n;i++))
do
read a[i]
done

for((i=0;i<n;i++))
	do
	for((j=0;j<n-1;j++))
	do
		if [ ${a[j]} -gt ${a[j+1]} ]
		then
			temp=${a[j]}
			a[j]=${a[j+1]}
			a[j+1]=$temp
		fi
	done
	done
echo "sorted array"
for((i=0;i<n;i++))
	do
	echo ${a[i]}
	done


while((1))
do
echo "enter element to search"
read s

l=0
c=0
u=$(($n-1))

while(($l <= $u))
do
mid=$(((($l+$u))/2))

if [ $s -eq ${a[mid]} ]
then
c=1
break
elif [ $s -le ${a[mid]} ]
then 
u=$(($mid-1))
else

l=$(($mid+1))
fi
done

if((c==1))

then
echo "element found at $(($mid+1))"

else
echo "not found"
fi

echo "1 to continue"
read y
if((y!=1))
then
break
fi
done

