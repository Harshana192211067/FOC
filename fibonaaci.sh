read -p "Enter the value of n: " n
a=0
b=1
i=0
while [[ $i -lt $n ]]
do
    echo "$f1 "
    c=$((a + b))
    a=$((b))
    b=$((c))
    ((i++))
done