
arr=(1 12 31 4 5)

i=0

while [[ $i -lt ${#arr[@]} ]]; do
	echo ${arr[$i]}

	i=`expr $i+1`
done

for i in "${arr[@]}"; do
	echo $i
done


echo -n "Enter the Total numbers :"
read n
echo "Enter numbers : "
i=0

while [[ $i -lt $n ]]; do
	read a[$i]
	i=`expr $i+1`
done
echo "Output :"

i=0

while [[ $i -lt $n ]]; do
	echo ${a[$i]}
	i=`expr $i+1`
done

echo "Output for:"

for i in "${a[@]}"
do
	echo $i
done