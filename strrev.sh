echo enter the string
  read str
len=${#str}
for(( i=$len - 1;i>=0;i-- ))
do
  reverse=$reverse${str:$i:1}
done
  echo $reverse
if [ $str = $reverse ]
then
  echo string is palindrome
else
  echo string is not palindrome
fi
