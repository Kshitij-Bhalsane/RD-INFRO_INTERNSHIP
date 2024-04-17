class Node:
	address = ' '
	name= ' '
	phoneno = 999999
	email= ' '

	def __init__(self):
		#initialization

		self.address = "NULL"
		self.name = "XYZ"
		self.phoneno = 9999999999;
		self.email= "XYZ@gmail.com"

	def __str__(self):
		return '\n'+'-'*20 + f"\nName : {self.name}\nPhone No. : {self.phoneno}\nAddress : {self.address}\nEmail : {self.email}\n"

class Contact:

	contact = [ ]
	def setContact(self):
		X  = Node();
		X.name = input("Enter Name : ")
		X.phoneno = input("Enter Phone No. : ")
		X.address = input("Enter Address : ")
		X.email = input("Enter email : ")

		self.contact.append(X)

	def updateContact(self):
		self.Display()

		index = int(input("Enter the index of contact to be updated :"))

		self.setContact()

		self.contact[index] = self.contact[-1]
		self.contact.pop(-1)
		print(f"\n Contact at {index} Updated.")

	def deleteContact(self):
		for i in range(len(self.contact)):
			print( i+1 , self.contact[i])

		index = int(input("Enter the index of contact to be deleted :"))
		self.contact.pop(index)
		print(f"\n Contact at {index} Deleted.")

	def Display(self):

		for i in range(len(self.contact)):
			print( i+1 , self.contact[i])

	def searchContact(self):
		para = input("\nEnter The name of contact to be searched : ")
		for i in self.contact:
			if i.name == para:
				print("Found")
				break
		print("Not Found")
		




def main():

	C = Contact();

	ch = 0
	while(ch != 5):
		ch = int(input("\n\t\t\t MENU\n\t\tChoose the operation to be performed : \n\t\t1] Add Contact \n\t\t2] Display Contacts \n\t\t3] Update Contact\n\t\t4] Search Contact\n\t\t5]Delete Contact \n\t\t Enter Your choice : "))

		match ch:
			case 1:
				C.setContact()
			case 2:
				C.Display()
			case 3:
				C.updateContact()
			case 4:
				C.searchContact()
			case 5:
				C.deleteContact()

main()








