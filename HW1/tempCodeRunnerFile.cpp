nt productNumber = 1;
		int factorialNum = userInput;
		
		while(userInput > 1)
		{
			productNumber *= userInput;
			userInput--;
		}
		cout << "Factorial of " << factorialNum << " is " << productNumber << "\n";