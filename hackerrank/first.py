def get_right_index(string,n):
    index = int((n-1)/2)
    if string[index] != '0':
        return index + 1
    for i in range(index,n):
        if string[i] != '0':
            return i

def get_left_index(string,n):
    index = int((n-1)/2)
    if string[index] != '0':
        return index + 1
    left_index = -1
    for i in range(index):
        if string[i] != '0':
            left_index = i
    return left_index

def findSum(str1, str2):   
    if (len(str1) > len(str2)): 
        t = str1; 
        str1 = str2; 
        str2 = t; 

    str = "";  
    n1 = len(str1); 
    n2 = len(str2);   
    str1 = str1[::-1];  
    str2 = str2[::-1];  
  
    carry = 0;  
    for i in range(n1):   
        sum = ((ord(str1[i]) - 48) + 
              ((ord(str2[i]) - 48) + carry));  
        str += chr(sum % 10 + 48);  
        carry = int(sum / 10);   
    for i in range(n1, n2):  
        sum = ((ord(str2[i]) - 48) + carry);  
        str += chr(sum % 10 + 48);  
        carry = (int)(sum / 10);  
 
    if (carry):  
        str += chr(carry + 48);   
    str = str[::-1];  
  
    return str
for _ in range(int(input())):
    n = int(input())
    number = input()
    divide_index = get_left_index(number,n)
    left_number = number[:divide_index]
    right_number = number[divide_index:]
    ans1 = findSum(left_number,right_number)
    #print("ans1 :",ans1)
    #print(left_number,right_number)
    divide = get_right_index(number,n)
    left_number = number[:divide]
    right_number = number[divide:]
    ans2 = findSum(left_number,right_number)
    #print("ans2 :",ans2)
    #print(left_number,right_number)
    if len(ans1) > len(ans2):
        print(ans2)
    elif len(ans1) < len(ans2):
        print(ans1)
    else:
        print(min(ans1,ans2))