Task = []

def Addtask():
	temp = []
	ip = input("\t\tEnter the Task : ")
	temp.append(ip)
	temp.append('Ongoing')
	Task.append(temp)

def UpdateTask():
	DisplayTask();
	index = int(input("\nEnter the Index of Task to be Updated : "))
	Task[index-1][1] = "Completed"

def DisplayTask():
	print(" \n\n\tIndex\t\t\tTask \t\t\t STATUS \n")
	for i in range(len(Task)):
		print("\t\t" , i+1 , "\t\t" , Task[i][0] , "\t\t" , Task[i][1] )
#-------------------------------------------------------------------------------------------------------------------------------------------------------

ch = 0
while(ch != 4):
	ch = int(input("\n\t\t\t MENU\n\t\tChoose the operation to be performed : \n\t\t1] Add Task \n\t\t2] Display Task List \n\t\t3] Update A Task\n\t\t4] Exit\n\t\t Enter Your choice : "))

	match ch:
		case 1:
			Addtask()
		case 2:
			DisplayTask()
		case 3:
			UpdateTask()
print("\n\t\tThank You. ")

