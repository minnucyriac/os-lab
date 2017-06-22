echo "enter the string:"
	read a
	flag=0

n=`expr ${#a}`
j=$n-1
	for((i=0;i<(n/2);i++))
	do
	if [ ${a:i:1} != ${a:j:1}  ]
	then
		flag=1
	fi
	j=$j-1
	done
if [ $flag -eq 0 ]
then
	echo "palindrome"
else
	echo "not palindrone"
fi


