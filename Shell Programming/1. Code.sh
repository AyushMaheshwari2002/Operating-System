ch=0 
 while [ $ch -ne 4 ] 
 do 
     echo "1.fact" 
     echo "2.fabonacci" 
     echo "3.isprime" 
     echo "4.Exit" 
  
     read ch 
     case $ch in 
         1) read num 
            fact=1 
            for(( i=1; i<=num; i++ )) 
            do 
                 fact=$((fact * i)) 
             done     
            echo "fact is = $fact" 
            ;; 
         2) read num 
            num1=0 
            num2=1 
            next=1 
  
            echo "The Fibonnaci Series is = " 
            for(( i=0; i<num; i++ )) 
            do  
                 echo -n "$num1 " 
                 let next=$num1+$num2 
                 let num2=$num1 
                 let num1=$next 
             done  
             ;; 
         3)read nums 
         for(( i=2; i<=$nums/2; i++ )) 
         do  
             ans=$(( nums%i)) 
             if [ $ans -eq 0 ] 
             then  
                 echo "$nums is NOt a Prime Number" 
                 exit 0 
             fi 
         done 
         echo "$nums is a Prime Number" 
         ;; 
         4) ch=4;; 
 esac 
 echo 
 done                  
 
 
 
