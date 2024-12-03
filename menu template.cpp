
// Remember that this is just a sample, it doesn't have to have 6 items or even a default!

int Menu()
{	
	int choice = 0;

	cout << "\t\tPlease choose one of the following: " << endl;
	cout << "\t**************************************************\n";
	cout <<     "1. Sort by Social Security Number.\n\n"
		 << "2. Sort by Name.\n\n"
		 << "3. Display all records.\n\n"
		 << "4. Sequential search for Social Security Number.\n\n"
		 << "5. Binary search for Social Security Number.\n\n"
		 << "6. Quit program.\n\n";
	cin >> choice;

	switch(choice)
		{
			case 1:
				
				break;

			case 2:
				
				break;

			case 3:
				
				break;

			case 4:
				
				break;

			case 5:
				
				break;

			case 6:
				exit(1);
				break;

			default:
				while(abs(choice) > 6)
				{
					cout << "\aThat was not a valid choice; Try Again.\n";
					cin >> choice;
				}
		}

	return choice;
}