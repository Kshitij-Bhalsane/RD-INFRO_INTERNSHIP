import random

def RPS():
	choice = ['rock' , 'paper' , 'scissor']
	userpoint = computerpoint = 0
	
	while(computerpoint<3 or userpoint<3  ):
		
		c_c = choice[random.randint(0,67)%3]
		u_c = input("Enter Your choice (rock/paper/scissor):")
		u_c = u_c.lower()
		if(u_c[0] =='r' and c_c[0] == "s" or u_c[0]=='p' and c_c[0] == "r" or u_c[0]=='s' and c_c[0] == "p" ):
			userpoint+=1;
			print("User : " , u_c , "\nComputer : " , c_c ,"\nUser wins this round.\n")
		else:
			if(u_c[0] =='r' and c_c[0] == "r" or u_c[0]=='p' and c_c[0] == "p" or u_c[0]=='s' and c_c[0] == "s" ):
				print("User : " , u_c , "\nComputer : " , c_c ,"\n\nTie\n")
			else:
				computerpoint+=1
				print("User : " , u_c , "\nComputer : " , c_c ,"\nComputer wins this round.\n")
	#projects , myanalyticschool , gate focus , 6/7 hrs , routine , discipline 
	if(userpoint >2):
		print("User won 3 rounds , User Wins")
		return
	print("Computer won 3 rounds , Computer Wins")
	return

choice = 'y'
print("\n\t\tWelcome to ROCK/PAPER/SCISSORS Game.\n");
while(choice != 'n'):
	RPS()
	choice =input("Do you want to continue(y/n) :  " )