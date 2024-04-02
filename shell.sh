# function factorial (){
#     if [ $1 -eq 0 ]; then
#         echo 1
#     else
#         echo $(($1*$(factorial $(($1-1)))))
#     fi
# }

# echo "Enter a number: "
# read num
# fac=$(factorial $num)
# echo $fac


echo "Enter a number: "
read num
echo "Enter a limit: "
read limit
for ((i=1; i<=$limit; i++))
do
    echo $num
    num=$((num + 1))
done
echo $num
