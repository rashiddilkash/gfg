#! /bin/bash

arr=(prakhar ankit 1 rishab manish abhinav)

echo ${arr[@]}
echo ${arr[*]}
echo ${arr[@]:0}
echo ${arr[*]:3}

echo ${arr[0]}
echo ${arr}

echo ${arr[3]}
echo ${arr[1]}


echo ${arr[@]:0}
echo ${arr[@]:1}
echo ${arr[@]:2}
echo ${arr[@]:3}
echo ${arr[@]:4}


echo ${arr[@]:1:4}
echo ${arr[@]:2:3}
echo ${arr[@]:1:3}

echo ${#arr[3]}
echo ${#arr}

echo ${#arr[@]}
echo ${#arr[*]}

echo ${arr[@]/*[aA]*/}

echo ${arr[@]//a/A}
echo ${arr[@]}
echo ${arr[0]//r/R}

unset arr[1]

echo ${arr[@]}

