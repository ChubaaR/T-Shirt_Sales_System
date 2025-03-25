/*Name : CHUBAASINY ESWARARAO
Developed Date : 3/12/2023
Assignment Title : T-SHIRT SALES SYSTEM*/

#include <iostream>
#include <iomanip>

using namespace std;

//FUNCTION STEREOTYPES
//It is used to tell the compiler that this function exits of not the compiler will the function
//I used function for each categories to keep the code more organised
void MainmenuFn();
void DisplayFn(int &size, int &colour, int &redXS, int &blueXS, int &blackXS, int &redS, int &blueS, int &blackS, int &redM, int &blueM, int &blackM, int &redL, int &blueL, int &blackL, int &redXL, int &blueXL, int &blackXL);
void PurchaseFn(int &size, int &colour, int &redXS, int &blueXS, int &blackXS, int &redS, int &blueS, int &blackS, int &redM, int &blueM, int &blackM, int &redL, int &blueL, int &blackL, int &redXL, int &blueXL, int &blackXL);


/////////////////
////INT MAIN////
///////////////

//Int main has all the function calls
int main() 
{
	//VARIABLE DECLARATION
	//Is used to tell the compiler about the existence of an entity
	//int is for digits & string for words
	
	int size, colour, quantity, choice;
	string exit;
	
	//I have assigned the available stock number for each choice of T-Shirt, users can only purchase within the stock amount
	int redXS=30, blueXS=30, blackXS=30;
	int redS=50, blueS=50, blackS=50;
	int redM=50, blueM=50, blackM=50;
	int redL=30, blueL=30, blackL=30;
	int redXL=20, blueXL=20, blackXL=20;
	
	
	//Using the DO-WHILE LOOP to repeat the choice of the user want to go to another function through Mainmenu Function
	//If the user choose 'Y' the loop will exit if 'N' the loop continues
	
	do   //Start the loop
	{
		//Main 
		MainmenuFn(); //Function Call //The function that I used to display all 3 choice where 2 of the choices are function
	
		//Using cin to let the user enter a choice
		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	
		//WHILE LOOP is used to VALIDATE whether the choice is in between 1-3 range or not
		//If it's outside the range, the display will show INVALID CHOICE
		while (choice < 1 || choice > 3) 
		{
			cout << "Invalid choice chosen. Please try again." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
		}
		
		//If choice is '1' the compiler shows the Display function
		if (choice == 1)
		{
			DisplayFn(size, colour, redXS, blueXS, blackXS, redS, blueS, blackS, redM, blueM, blackM, redL, blueL, blackL, redXL, blueXL, blackXL);	//Function Call
			cout << "Do you want to exit? (Y/N) : ";
			cin >> exit;
		
			//WHILE LOOP is used to VALIDATE whether the exit is "Y" & "y" or "N" & "n" or not
			//If it's outside the given letter, the display will show INVALID INPUT
			while (!(exit == "Y" || exit == "y" || exit == "N" || exit == "n")) 
			{
          	 	cout << "Invalid input. Please enter 'Y' or 'N'." << endl;
          		cin >> exit;
        	}
        		
		}
		
		//If choice is '2' the compiler shows the Purchase function
		else if (choice == 2)
		{
			PurchaseFn(size, colour, redXS, blueXS, blackXS, redS, blueS, blackS, redM, blueM, blackM, redL, blueL, blackL, redXL, blueXL, blackXL); //Function Call
			cout << "Do you want to exit? (Y/N) : ";
			cin >> exit;
		
			//WHILE LOOP is used to VALIDATE whether the exit is "Y" & "y" or "N" & "n" or not
			//If it's outside the given letter, the display will show INVALID INPUT
			while (!(exit == "Y" || exit == "y" || exit == "N" || exit == "n")) 
			{
         	 		cout << "Invalid input. Please enter 'Y' or 'N'." << endl;
          	 		cin >> exit;
    	  	}
		}
		
		//If choice is '3' the compiler will exit
		else // (choice == 3)
		{
				exit = "Y";  //using this method to automatically end the loop
		}
	//When the user chooses option "Y" or "y", the compiler will exit with a thank you message.
	
	} while (exit == "N" || exit == "n");  //End the loop
		
		
		
		cout << "\nThank you!\nPlease come again!\n(Goods Sold Are Non Refundable)" << endl;
	
	return 0; 
}

/////////////////
///MAIN MENU////
///////////////

//This function is used to display the Main three options of the T-Shirt sales system
//I used this function to label the options that I have assigned to different functions that i used to organised this code
void MainmenuFn() 
{
	//SETFILL and SETWIDTH is used to arrange the labels in an organised order
	
	cout << setw(39) << setfill('-') << "-";
		 
	cout << "\nWelcome to the T-Shirt Sales System!"<< endl;
	
	cout << setw(39) << setfill('-') << "-"; 
	
	cout << "\n1. Display Available T-Shirts";
	cout << "\n2. Purchase T-Shirt";
	cout << "\n3. Exit";
	
	
	cout << endl << setw(39) << setfill('-') << "-";
	
	//Once the Main Menu Function process is done the compiler will go back to the place where the function was called
}

/////////////////////////
//DISPLAY AVAILABILITY//
///////////////////////

//This function is used to display the available stocks for all the different choices of the T-Shirts, so that the user can check the available number of stocks before purchasing
void DisplayFn(int &size, int &colour, int &redXS, int &blueXS, int &blackXS, int &redS, int &blueS, int &blackS, int &redM, int &blueM, int &blackM, int &redL, int &blueL, int &blackL, int &redXL, int &blueXL, int &blackXL)
{
	//SETFILL and SETWIDTH is used to arrange the labels in an organised order
	//The DISPLAY for this function shows size, colour and available stock or updated stock after purchase of the T-shirts
	
	//Display Availabilty
	//Display Header
	cout << endl << setw(33) << setfill(' ') << "T-Shirt Availablity"<< endl;
	cout << setw(50) << setfill('-') << "-" << endl;	
	cout << setfill(' ');
	cout << "Size" << setw(22) << "Colour" << setw(22)<< "Quantity\n";
	cout << setw(50) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	
	//Display size, colour and quantity
	//For XS
	cout << setw(23) << "Red" << setw(21) << redXS << endl;
	cout << "XS"<< setw(22) << "Blue" << setw(20) << blueXS<< endl;
	cout << setw(25) << "Black" << setw(19) << blackXS << endl;
	cout << setw(50) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	
	//For S
	cout << setw(23) << "Red" << setw(21) << redS << endl;
	cout << "S" << setw(23) << "Blue" << setw(20) << blueS << endl;
	cout << setw(25) << "Black" << setw(19) << blackS << endl;
	cout << setw(50) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	
	//For M
	cout << setw(23) << "Red" << setw(21) << redM << endl;
	cout << "M"<< setw(23) << "Blue" << setw(20) << blueM << endl;
	cout << setw(25) << "Black" << setw(19) << blackM << endl;
	cout << setw(50) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	
	//For L
	cout << setw(23) << "Red" << setw(21) << redL << endl;
	cout << "L"<< setw(23) << "Blue" << setw(20) << blueL << endl;
	cout << setw(25) << "Black" << setw(19) << blackL << endl;
	cout << setw(50) << setfill('*') << "*" << endl;
	cout << setfill(' ');
	
	//For XL
	cout << setw(23) << "Red" << setw(21) << redXL << endl;
	cout << "XL" << setw(22) << "Blue" << setw(20) << blueXL << endl;
	cout << setw(25) << "Black" << setw(19) << blackXL << endl;
	cout << setw(50) << setfill('*') << "*" << endl;
	cout << setfill(' ') << endl;
	
	//Once the Display Function process is done the compiler will go back to the place where the function was called
}

/////////////////
///PRICE LIST///
///////////////

void PurchaseFn(int &size, int &colour, int &redXS, int &blueXS, int &blackXS, int &redS, int &blueS, int &blackS, int &redM, int &blueM, int &blackM, int &redL, int &blueL, int &blackL, int &redXL, int &blueXL, int &blackXL)
{
	//This part shows the price lists for all the different choices of the T-Shirts, so that the user can check the price before purchasing
	//The DISPLAY for the price list part shows size, colour and price of T-shirts
	//SETFILL and SETWIDTH is used to arrange the labels in an organised order
	
	//Display Header//
	cout << "\t     Purchase T-Shirt \t\t" << endl;
	cout << setw(50) << setfill('-') << "-" << endl;	
	cout << setfill(' ');
	cout << "Size" << setw(22) << "Colour" << setw(21)<< "Price(RM)\n";
	cout << setw(50) << setfill('-') << "-" << setfill(' ') << endl;

	//Display size, colour and quantity//
	//For XS
	cout << setw(23) << "Red" << setw(21) << "25.00" << endl;
	cout << "1." << "XS"<< setw(20) << "Blue" << setw(20) << "25.00" << endl;
	cout << setw(25) << "Black" << setw(19) << "25.00" << endl;
	cout << setw(50) << setfill('*') << "*" << setfill(' ') << endl;
	
	//For S
	cout << setw(23) << "Red" << setw(21) << "25.00" << endl;
	cout << "2." << "S" << setw(21) << "Blue" << setw(20) << "25.00" << endl;
	cout << setw(25) << "Black" << setw(19) << "25.00" << endl;
	cout << setw(50) << setfill('*') << "*" << setfill(' ') << endl;
	
	//For M
	cout << setw(23) << "Red" << setw(21) << "30.00" << endl;
	cout << "3." << "M"<< setw(21) << "Blue" << setw(20) << "30.00" << endl;
	cout << setw(25) << "Black" << setw(19) << "30.00" << endl;
	cout << setw(50) << setfill('*') << "*" << setfill(' ') << endl;
	
	
	//For L
	cout << setw(23) << "Red" << setw(21) << "30.00" << endl;
	cout << "4." << "L"<< setw(21) << "Blue" << setw(20) << "30.00" << endl;
	cout << setw(25) << "Black" << setw(19) << "30.00" << endl;
	cout << setw(50) << setfill('*') << "*" << setfill(' ') << endl;
	
	//For XL
	cout << setw(23) << "Red" << setw(21) << "35.00" << endl;
	cout << "5." << "XL" << setw(20) << "Blue" << setw(20) << "35.00" << endl;
	cout << setw(25) << "Black" << setw(19) << "35.00" << endl;
	cout << setw(50) << setfill('*') << "*" <<setfill(' ') << endl;
	
	//VARIABLE DECLARATION 
	string decision;
	int quantity;
	
	//CART VARIABLE DECLARATION
	//Initially I have assign the number into '0' because intially before purchase the cart are always empty
	int qtyRedXS = 0, qtyBlueXS = 0, qtyBlackXS = 0;
	int qtyRedS = 0, qtyBlueS = 0, qtyBlackS = 0;
	int qtyRedM = 0, qtyBlueM = 0, qtyBlackM = 0;
	int qtyRedL = 0, qtyBlueL = 0, qtyBlackL = 0;
	int qtyRedXL = 0, qtyBlueXL = 0, qtyBlackXL = 0;
	
	//LOOP THE PURCHASE (Do-while Loop)
	//I used this loop to let the user to repeat their purchase on same options or different options till they want to exit
	
	do 		//Start of (do-while LOOP)
	{ 
	
		//CHOOSE SIZE AND QUANTITY
		cout << "\nEnter your size of choice (1=XS, 2=S, 3=M, 4=L, 5=XL): ";
		cin >> size;
	
		//SIZE VALIDATION (while loop)
		//WHILE LOOP is used to VALIDATE the integer given for size whether it is in the range of 1-5 or not
		//If it's outside the range, the display will show INVALID SIZE CHOSEN
		while (size < 1 || size > 5)
		{
			cout << "Invalid size chosen. Please try again." << endl;
			cin >> size;
		}
		
		
		//XS
		if (size == 1)  //If else is used in all variation to let the user to add one variation at one time 
		{
			cout << "You chose size XS" << endl;
					
			//CHOOSE COLOUR
			cout << "\nEnter your colour of choice (1=Red, 2=Blue, 3=Black): ";
			cin >> colour;
			
			
			//COLOUR VALIDATION (while loop)
			//WHILE LOOP is used to VALIDATE the integer given for colour whether it is in the range of 1-3 or not
			//If it's outside the range, the display will show INVALID COLOUR CHOSEN
			while (colour < 1 || colour > 3)
			{
				cout << "Invalid colour chosen. Please try again." << endl;
				cin >> colour;
			}
		    
			//RED			
			if (colour == 1)
			{
				cout << "You chose Red" << endl;
	
				if (redXS != 0) //stock is available
				{
					//Limit quantity for red XS
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
					
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for redXS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > redXS)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					redXS -= quantity;    //CALCULATED to update the stock
					qtyRedXS += quantity;	//CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Red XS T-shirt is not available. Please enter another size or colour.";	
				}
			}
			
			//BLUE
			else if (colour == 2)
			{
				cout << "You chose Blue" << endl;
	
				if (blueXS != 0) //stock is available
				{
					//Limit quantity for blue XS
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
					
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blueXS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blueXS)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blueXS -= quantity;  //CALCULATED to update the stock
					qtyBlueXS += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Blue XS T-shirt is not available. Please enter another size or colour.";	
				}
			}	
			
			//BLACK
			else  //(colour == 3)
			{
				cout << "You chose Black" << endl;
	
				if (blackXS != 0) //stock is available
				{
					//Limit quantity for black XS
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blackXS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blackXS) 
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blackXS -= quantity;  //CALCULATED to update the stock
					qtyBlackXS += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Black XS T-shirt is not available. Please enter another size or colour.";	
				}
			}	
		}
		
		//S		
		else if (size == 2)  //If else is used in all variation to let the user to add one variation at one time 
		{
			cout << "You chose size S" << endl;

			//CHOOSE COLOUR
			cout << "\nEnter your colour of choice (1=Red, 2=Blue, 3=Black): ";
			cin >> colour;
	
			//COLOUR VALIDATION (while loop)
			//WHILE LOOP is used to VALIDATE the integer given for colour whether it is in the range of 1-3 or not
			//If it's outside the range, the display will show INVALID COLOUR CHOSEN
			while (colour < 1 || colour > 3)
			{
				cout << "Invalid colour chosen. Please try again." << endl;
				cin >> colour;
			}
	
			//RED
			if (colour == 1)
			{
				cout << "You chose Red" << endl;
				
				if (redS != 0) //stock is available
				{
					//Limit quantity for red S
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for redS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > redS)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					redS -= quantity;  //CALCULATED to update the stock
					qtyRedS += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Red S T-shirt is not available. Please enter another size or colour.";	
				}
			}
			
			//BLUE
			else if (colour == 2)
			{
				cout << "You chose Blue" << endl;
		
				if (blueS != 0) //stock is available
				{
					//Limit quantity for blue S
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blueS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blueS)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blueS -= quantity;  //CALCULATED to update the stock
					qtyBlueS += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Blue S T-shirt is not available. Please enter another size or colour.";	
				}
			}	
			
			//BLACK
			else //(colour == 3)
			{
				cout << "You chose Black" << endl;
			
				if (blackS != 0) //stock is available
				{
					//Limit quantity for black S
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
					
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blackS or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blackS)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blackS -= quantity;  //CALCULATED to update the stock
					qtyBlackS += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Black S T-shirt is not available. Please enter another size or colour.";	
				}
			}
		}
		
		//M
		else if (size == 3)  //If else is used in all variation to let the user to add one variation at one time 
		{
			cout << "You chose size M" << endl;

			//CHOOSE COLOUR
			cout << "\nEnter your colour of choice (1=Red, 2=Blue, 3=Black): ";
			cin >> colour;
		
			//COLOUR VALIDATION (while loop)
			//WHILE LOOP is used to VALIDATE the integer given for colour whether it is in the range of 1-3 or not
			//If it's outside the range, the display will show INVALID COLOUR CHOSEN
			while (colour < 1 || colour > 3)
			{
				cout << "Invalid colour chosen. Please try again." << endl;
				cin >> colour;
			}
			
			//RED
			if (colour == 1)
			{
				cout << "You chose Red" << endl;
			
				if (redM != 0) //stock is available
				{
					//Limit quantity for red M
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for redM or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > redM)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					redM -= quantity;  //CALCULATED to update the stock
					qtyRedM += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Red M T-shirt is not available. Please enter another size or colour.";	
				}
			}
			
			//BLUE
			else if (colour == 2)
			{
				cout << "You chose Blue" << endl;
			
				if (blueM != 0) //stock is available
				{
					//Limit quantity for blue M
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blueM or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blueM)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blueM -= quantity;  //CALCULATED to update the stock
					qtyBlueM += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Blue M T-shirt is not available. Please enter another size or colour.";	
				}
				
			}	
			
			//BLACK
			else //(colour == 3)
			{
				cout << "You chose Black" << endl;
					
				if (blackM != 0) //stock is available
				{
					//Limit quantity for black M
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blackM or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blackM)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					blackM -= quantity;  //CALCULATED to update the stock
					qtyBlackM += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Black M T-shirt is not available. Please enter another size or colour.";	
				}
			
			}
		
		}
		
		//L			
		else if (size == 4)  //If else is used in all variation to let the user to add one variation at one time 
		{
			cout << "You chose size L" << endl;
		
			//CHOOSE COLOUR
			cout << "\nEnter your colour of choice (1=Red, 2=Blue, 3=Black): ";
			cin >> colour;
		
			//COLOUR VALIDATION (while loop)
			//WHILE LOOP is used to VALIDATE the integer given for colour whether it is in the range of 1-3 or not
			//If it's outside the range, the display will show INVALID COLOUR CHOSEN
			while (colour < 1 || colour > 3)
			{
				cout << "Invalid colour chosen. Please try again." << endl;
				cin >> colour;
			}
			
			//RED
			if (colour == 1)
			{
				cout << "You chose Red" << endl;
			
				if (redL != 0) //stock is available
				{
					//Limit quantity for red L
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for redL or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > redL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					redL -= quantity;  //CALCULATED to update the stock
					qtyRedL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Red L T-shirt is not available. Please enter another size or colour.";	
				}
				
			}
			
			//BLUE
			else if (colour == 2)
			{
				cout << "You chose Blue" << endl;
				
				if (blueL != 0) //stock is available
				{
					//Limit quantity for blue L
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blueL or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blueL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					blueL -= quantity;  //CALCULATED to update the stock
					qtyBlueL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Blue L T-shirt is not available. Please enter another size or colour.";	
				}
				
			}	
			
			//BLACK
			else //(colour == 3)
			{
				cout << "You chose Black" << endl;
			
				if (blackL != 0) //stock is available
				{
					//Limit quantity for blue L
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blackL or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blackL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					blackL -= quantity;  //CALCULATED to update the stock
					qtyBlackL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
						cout << "Black L T-shirt is not available. Please enter another size or colour.";	
				}
				
				
			}
			
		}	
		
		//XL
		else //(size == 5) //If else is used in all variation to let the user to add one variation at one time 
		{
			cout << "You chose size XL" << endl;
		
			//CHOOSE COLOUR
			cout << "\nEnter your colour of choice (1=Red, 2=Blue, 3=Black): ";
			cin >> colour;
			
			//COLOUR VALIDATION (while loop)
			//WHILE LOOP is used to VALIDATE the integer given for colour whether it is in the range of 1-3 or not
			//If it's outside the range, the display will show INVALID COLOUR CHOSEN
			while (colour < 1 || colour > 3)
			{
				cout << "Invalid colour chosen. Please try again." << endl;
				cin >> colour;
			}
			//RED
			if (colour == 1)
			{
				cout << "You chose Red" << endl;
			
				if (redXL != 0) //stock is available
				{
					//Limit quantity for red XL
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for redXL or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > redXL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					//If it's less or equal the CALCULATION STARTS
					
					redXL -= quantity;  //CALCULATED to update the stock
					qtyRedXL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Red XL T-shirt is not available. Please enter another size or colour.";	
				}
				
			}
			
			//BLUE
			else if (colour == 2)
			{
				cout << "You chose Blue" << endl;
			
				if (blueXL != 0) //stock is available
				{
					//Limit quantity for blue XL
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blueXl or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blueXL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					blueXL -= quantity;  //CALCULATED to update the stock
					qtyBlueXL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
					cout << "Blue XL T-shirt is not available. Please enter another size or colour.";	
				}
				
			}	
			
			//BLACK			
			else //(colour == 3)
			{
				cout << "You chose Black" << endl;
		
				if (blackXL != 0) //stock is available
				{
					//Limit quantity for black XL
					cout << "\nEnter the quantity you want to buy: ";
					cin >> quantity;
		
					//WHILE LOOP is used to VALIDATE whether the quantity entered is more than the quantity for blackXL or not
					//If it's more the user will be told that the quantity has exceeded the purchase limit
					while (quantity > blackXL)
					{
						cout << "\nThe quantity you've entered is more than the quantity of available T-Shirt. Please enter another quantity? "<< endl;
						cout << "\nEnter the quantity you want to buy: ";
						cin >> quantity;
					}
					
					blackXL -= quantity;  //CALCULATED to update the stock
					qtyBlackXL += quantity;  //CALCULATED to give the data to the bill section
				}
				
				else  //stock is not available
				{
						cout << "Black XL T-shirt is not available. Please enter another size or colour.";	
				}
				
			}
	
		}
				
		cout << "\nDo you want to continue adding T-Shirt to your cart? (Y/N): "; //IT IS USED FOR MULTIPLE PURCHASE
		cin >> decision;
		
		//VALIDATE THE DECISION (while loop)
		//WHILE LOOP is used to VALIDATE whether the exit is "Y" & "y" or "N" & "n"
		//If it's outside the given letter, the display will show INVALID INPUT
		
		while (!(decision == "Y" || decision == "y" || decision == "N" || decision == "n")) 
		{
       		cout << "Invalid input. Please enter 'Y' or 'N'." << endl;
         	cin >> decision;
      	}
      	
	//When the user chooses option "Y" or "y", the DO-WHILE LOOP will end and the compiler will proceed to the BILLING.	
		
	} while (decision == "Y" || decision == "y"); //End of (do-while LOOP)
		
		
	//START the BILLING
			
	//Shop details
	//SETFILL and SETWIDTH is used to arrange the details in an organised order
	
	cout << "\n\n" << setw(28) << "CHUBA'S T-SHIRT" << endl;
	cout << setw(33) << "Chuba Sdn Bhd (111456-S)" << endl;
	cout << setw(34) << "G-223, G FLOOR SURIA KLCC" << endl;
	cout << setw(31) << "PETRONAS TWIN TOWER" << endl;
	cout << setw(30) << "50088 KUALA LUMPUR" << endl;
	cout << setw(30) << "Tel : 03-6388 2121" << endl;
	cout << setfill(' ') << endl;
	

		
	//BILL SUMMARY and price calculation for each choice
	cout << endl << "Your bill:\v" << endl;
	
	//VARIABLE DECLARATION
	double Total = 0.0;	
				
	
	//IF STATEMENT is used for this part to let more than 1 varition of purchase to be displayed in the same bill
	//REDXS
	if (qtyRedXS > 0)
	{   
		cout << endl << setw(3) << qtyRedXS << setw(3) << "XS" << setw(5) << "Red";
		cout << setw(25) << qtyRedXS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyRedXS*25.00 << endl;
		cout << setfill(' ');  
		                                
		Total += qtyRedXS * 25.00; //CALCULATING THE TOTAL for RedXS
	}        
		
	//BLUEXS
	if (qtyBlueXS > 0)
	{
		cout << endl << setw(3) << qtyBlueXS<< setw(3) << "XS" << setw(6) << "Blue";
		cout << setw(24) << qtyBlueXS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlueXS*25.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlueXS * 25.00; //CALCULATING THE TOTAL for BlueXS
	}
		
	//BLACKXS
	if (qtyBlackXS > 0)
	{
		cout << endl << setw(3) << qtyBlackXS << setw(3) << "XS" << setw(7) << "Black";
		cout << setw(23) << qtyBlackXS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlackXS*25.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlackXS * 25.00; //CALCULATING THE TOTAL for BlackXS
	}
		
	//REDS
	if (qtyRedS > 0)
	{
		cout << endl << setw(3) << qtyRedS << setw(3) << "S" << setw(5) << "Red";
		cout << setw(25) << qtyRedS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyRedS*25.00 << endl;
		cout << setfill(' ');
		
		Total += qtyRedS * 25.00; //CALCULATING THE TOTAL for RedS
	}
		
	//BLUES
	if (qtyBlueS > 0)
	{
		cout << endl << setw(3) << qtyBlueS << setw(3) << "S" << setw(6) << "Blue";
		cout << setw(24) << qtyBlueS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlueS*25.00 << endl;
		cout << setfill(' ');
			
		Total += qtyBlueS * 25.00; //CALCULATING THE TOTAL for BlueS
	}
				
	//BLACKS
	if (qtyBlackS > 0)
	{
		cout << endl << setw(3) << qtyBlackS << setw(3) << "S" << setw(7) << "Black";
		cout << setw(23) << qtyBlackS << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 25.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlackS*25.00 << endl;
		cout << setfill(' ');
				
		Total += qtyBlackS * 25.00; //CALCULATING THE TOTAL for BlackS
	}
				
	//REDM
	if (qtyRedM > 0)
	{
		cout << endl << setw(3) << qtyRedM << setw(3) << "M" << setw(5) << "Red";
		cout << setw(25) << qtyRedM << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyRedM*30.00 << endl;
		cout<< setfill(' ');
			
		Total += qtyRedM * 30.00; //CALCULATING THE TOTAL for RedM
	}
				
	//BLUEM
	if(qtyBlueM > 0)
	{
		cout << endl << setw(3) << qtyBlueM << setw(3) << "M" << setw(6) << "Blue";
		cout << setw(24) << qtyBlueM << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlueM*30.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlueM * 30.00; //CALCULATING THE TOTAL for BlueM
	}
				
	//BLACKM
	if (qtyBlackM > 0)
	{
		cout << endl << setw(3) << qtyBlackM << setw(3) << "M" << setw(7) << "Black";
		cout << setw(23) << qtyBlackM << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlackM * 30.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlackM * 30.00; //CALCULATING THE TOTAL for BlackM
	}
				
	//REDL
	if (qtyRedL > 0)
	{
		cout << endl << setw(3) << qtyRedL << setw(3) << "L" << setw(5) << "Red";
		cout << setw(25) << qtyRedL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyRedL*30.00 << endl;
		cout << setfill(' ');
		
		Total += qtyRedL * 30.00;  //CALCULATING THE TOTAL for RedL
	}
				
	//BLUEL
	if (qtyBlueL > 0)
	{
		cout << endl << setw(3) << qtyBlueL << setw(3) << "L" << setw(6) << "Blue";
		cout << setw(24) << qtyBlueL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlueL*30.00 << endl;
		cout << setfill(' ');
				
		Total += qtyBlueL * 30.00;  //CALCULATING THE TOTAL for BlueL
	}
				
	//BLACKL
	if (qtyBlackL > 0)
	{
		cout << endl << setw(3) << qtyBlackL << setw(3) << "L" << setw(7) << "Black";
		cout << setw(23) << qtyBlackL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 30.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlackL*30.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlackL * 30.00;  //CALCULATING THE TOTAL for BlackL
	}
				
	//REDXL
	if (qtyRedXL > 0)
	{
		cout << endl << setw(3) << qtyRedXL << setw(3) << "XL" << setw(5) << "Red";
		cout << setw(25) << qtyRedXL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 35.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyRedXL*35.00 << endl;
		cout << setfill(' ');
				
		Total += qtyRedXL*35.00;  //CALCULATING THE TOTAL for RedXL
	}
				
	//BLUEXL
	if (qtyBlueXL > 0)
	{
		cout << endl << setw(3) << qtyBlueXL << setw(3) << "XL" << setw(6) << "Blue";
		cout << setw(24) << qtyBlueXL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 35.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlueXL*35.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlueXL*35.00;  //CALCULATING THE TOTAL for BlueXL
	}
				
	//BLACKXL
	if (qtyBlackXL > 0)
	{
		cout << endl << setw(3) << qtyBlackXL << setw(3) << "XL" << setw(7) << "Black";
		cout << setw(23) << qtyBlackXL << setw(2) << "x" << setw(3) << "RM" << fixed << setprecision(2) << 35.00;
		cout << setw(10) << "RM " << fixed << setprecision(2) << qtyBlackXL*35.00 << endl;
		cout << setfill(' ');
		
		Total += qtyBlackXL*35.00;  //CALCULATING THE TOTAL for BlackXL
	}
	
	
	 
	
	//Calculate the Subtotal, Salestax and Grandtotal//
	//SETFILL and SETWIDTH is used to arrange the words in an organised order
	
	//Subtotal
	
	double subTotal = Total; 
			
	cout << setw(80) << setfill('-') << "-" << setfill (' ') << endl;
	cout << endl << setw(48) << "Sub-Total : RM " << fixed << setprecision(2) << subTotal << setw(5) << endl;
		
		
	//Sales tax 6%
	
	double salesTax = subTotal*0.06; 
			
	cout << endl << setw(48) << "Sales Tax (6%) : RM " << fixed << setprecision(2) << salesTax << setw(5) << endl;
		
		
	//Grand total (addition of subtotal and salestax)
	
	double grandTotal = subTotal + salesTax; 
			
	cout << endl << setw(48) << "Grand Total : RM " << fixed << setprecision(2) << grandTotal << setw(5) << endl;
	cout << endl << setw(80) << setfill('-') << "-" << setfill (' ') << endl;
		
		
	//Cash amount
	 
	double cash;

	cout << setw(48)<< "CASH : RM ";
	cin >> cash;	
	
	while (cash < grandTotal)//DO-WHILE LOOP is used to let the user to re-enter multiple till the cash is more than or equals to grandtotal
	{	
		//The user will be told that their money is not enough and will be given another change to re-enter the cash amount
		
			cout << "\nYour money is not enough! Please pay more." << endl;
			cout << endl << setw(48)<< "CASH : RM ";
			cin >> cash;
				
	} //LOOP ends when the cash is more than or equals to the grandtotal
	
	
		double change = cash-grandTotal;
		
		cout << setw(48) << "CHANGE : RM " << change << endl;  //Change will calulated and displayed
	
	//Once the Purchase Function process is done the compiler will go back to the place where the function was called		
}

