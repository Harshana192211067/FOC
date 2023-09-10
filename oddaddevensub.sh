
#!/bin/bash

read -p "Enter the value of n: " n
sum=0

for ((i=1; i<=n; i++))
do
    if (( i % 2 ))
    then
        sum=$((sum + i))
    else
        sum=$((sum - i))
    fi
done

echo "The sum of the even number series is: $sum"