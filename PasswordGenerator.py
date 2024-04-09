import random

def PWGen(diff, length):
	pw = ' '
	match diff:
		case 1:
			for i in range(length):
				pw+=chr(random.randint(65 , 90))
			return pw
		
		case 2:
			for i in range(length):
				pw+=chr(random.randint(65 , 126))
			return pw
		case 3:
			for i in range(length):
				pw+=chr(random.randint(33 , 126))
			return pw
print(chr(random.randint(31 , 127)))

length = int(input("Enter The length of PAssword to be Generated : "))
dif =  int(input("Enter The Difficulty of PAssword to be Generated : \n1] Easy \n2] Medium \n3] Hard \nEnter Your Choice :"))
print("Generated Password of Level " , dif , " is : " , PWGen(dif , length))
	
	

