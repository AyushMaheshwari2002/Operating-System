ch=0
while [ $ch -ne 6 ]
do 

    echo "1.ADD"
    echo "2.SUB"
    echo "3.MUL"
    echo "4.DIV"
    echo "5.MOD"
    echo "6.EXIT"

    read num1
    read num2
    read ch

    case $ch in 
        1) echo "$((num1 + num2))";; 
        2) echo "$((num1 - num2))";;
        3) echo "$((num1 * num2))";;
        4) echo "$((num1 / num2))";;
        5) echo "$((num1 % num2))";;
        6) let ch=6;;
        *) echo "Invalid choice";;
    esac
    done
    
    
    
