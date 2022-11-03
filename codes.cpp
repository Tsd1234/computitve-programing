int i=0;
        vector<string> arr;
         int number=1;
        while(i<n){
        if(number%3==0&&number%5!=0)
        {
            arr.push_back("Fizz");
        }
            else if(number%5==0&&number%3!=0)
            {
                arr.push_back("Buzz");
            }
            else if(number%5==0&&number%3==0)
            {
                arr.push_back("FizzBuzz");
            }
        else
        {
            arr.push_back(to_string(number));
        }
            i++;
            number++;

    }
     return arr;
     }
     };
     ----------------------------------------------------------
      int i=0;
           int num=grades.size();
         int mul;
           vector<int> num1;
          while(i<num){
                mul=5;
              if(grades[i]>37)
              {
                while(grades[i]>mul){
                    mul=mul+5;
                    
                }
                if(mul-grades[i]<3)
                    grades[i]=mul;  
                }
                
                  
                
                num1.push_back(grades[i]);
                  i++; 
              }
            
           
          
     return num1;
