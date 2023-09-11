echo "Enter First String:"
read string1
echo "Enter Second String:"
read string2
if [ $string1 -eq $string2 ]
then
	echo "Strings are equal!"
else
	echo "Strings are not equal!!"
fi