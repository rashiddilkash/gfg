read -p 'Enter a : ' a
read -p 'Enter b : ' b


#Arithmetic Operators

add=$((a+b))
echo Addition of a and b are $add

sub=$((a-b))
echo Subtraction of a and b are $sub

mul=$((a*b))
echo Multiplication of a and b is $mul

div=$((a/b))
echo division of a and b are $div

mod=$((a%b))
echo Modulus of a and are $mod

((++a))
echo Increment operator when applied to "a" results into a = $a

((--b))
echo Decrement operator when applied to "b" results into b = $b 


echo 

#Relational Operators


echo $a

echo $b

if [[ $a == $b ]]; then
	echo a is equal to b.
else
	echo a is not equal to b.
fi

if [[ $a != $b ]]; then
	echo a is not equal to b.
else
	echo a is equal to b.
fi

if [[ $a < $b ]]; then
	echo a is less than b.
else
	echo a is not less than b.
fi

if [[ $a<=$b ]]; then
	echo a is less than or equal to b.
else
	echo a is greater than b.
fi

if [[ $a>$b ]]; then
	echo a is greater than b.
else 
	echo a is not greater than b.
fi

if [[ $a>=$b ]]; then
	echo a is greater than or equal to b.
else
	echo a is less than b.
fi

echo


#logical operator

read -p 'Enter a : ' a
read -p 'Enter b : ' b

if [[ $a=="true"&&$b=="true" ]]; then
	echo both are true.
else
	echo both are not true.
fi

if [[ $a=="true"||$b=="true" ]]; then
	echo atleast one of them is true.
else
	echo none of them is true.
fi

if [[ !$a=="true" ]]; then
	echo "a" was initially false.
else
	echo "a" was initially true.
fi


#bitwise operators

read -p 'Enter a : ' a
read -p 'Enter b : ' b

bitwiseAND=$(( a&b ))
echo  bitwise AND of a and b is $bitwiseAND

bitwiseOR=$(( a|b ))
echo bitwise Or of a and b is $bitwiseOR

bitwiseXOR=$((a^b))
echo bitwise xor of a and b is $bitwiseXOR

bitwiseComplement=$((~a))
echo bitwise complement of a is $bitwiseComplement

leftshift=$(( a<<1))
echo Left Shift of a is $leftshift

rightshift=$((b>>1))
echo Right shift of b is $rightshift


#file test operator

read -p 'Enter file name : ' FileName 

if [[ -e $FileName ]]; then
	echo File Exist
else
	echo File doesn\'t Exist
fi

if [[ -s $FileName ]]; then
	echo The given file is not empty.
else
	echo the given file is empty.
fi

if [[ -r $FileName ]]; then
	echo the given file has read access.
else
	echo the given file does not have read excess.
fi

if [[ -w $FileName ]]; then
	echo the given file has write access.
else
	echo the given file does not have write acess.
fi

if [[ -e $FileName ]]; then
	echo the given file has execute excess.
else 
	echo the given file does not have execute excess.
fi